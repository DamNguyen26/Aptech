package damnguyen.aprotrain.com;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;
import android.util.Log;

import java.sql.Date;
import java.util.ArrayList;
import java.util.Formatter;
import java.util.List;

public class DBHelper extends SQLiteOpenHelper {

    private static final int dbVersion = 1;
    private static final String dbName = "noteDB";
    private static final String tblName = "noteTBL";

    DBHelper(Context context){
        super(context,dbName,null, dbVersion);
    }

    private static final String NoiDung = "noidung";
    private static final String QuanTrong = "quantrong";
    private static final String NgayTao = "ngaytao";

    @Override
    public void onCreate(SQLiteDatabase db) {
        String query = "CREATE TABLE "+tblName+" ("+NoiDung+" TEXT PRIMARY KEY, "+QuanTrong+" TEXT, "+NgayTao+" TEXT)";
        db.execSQL(query);
    }

    @Override
    public void onUpgrade(SQLiteDatabase db, int oldVersion, int newVersion) {
        if(oldVersion >= newVersion)
            return;
        db.execSQL("DROP TABLE IF EXISTS " + tblName);
        onCreate(db);
    }

    public int getNotesCount() {
        String countQuery = "SELECT  * FROM " + tblName;
        SQLiteDatabase db = this.getReadableDatabase();
        Cursor cursor = db.rawQuery(countQuery, null);

        int count = cursor.getCount();

        cursor.close();

        return count;
    }

    public void createDefaultNotesIfNeed()  {
        java.util.Date date = new java.util.Date();
        int count = this.getNotesCount();
        if(count ==0 ) {
            Note note1 = new Note("Hoc Android", date);
            Note note2 = new Note("Learning Android SQLite", date);
            this.addNote(note1);
            this.addNote(note2);
        }
    }

    public Note getNote(String noidung){
        SQLiteDatabase db = this.getReadableDatabase();
        String[] query = new String[] {NoiDung,QuanTrong,NgayTao};
        Cursor cursor =  db.query(tblName,query,NoiDung+"=?",new String[]{String.valueOf(noidung)},null,null,null,null);
        if(cursor != null)
            cursor.moveToFirst();

        return new Note(
                cursor.getString(0),
                Boolean.parseBoolean(cursor.getString(1)),
                Date.valueOf(cursor.getString(2)));
    }

    public List<Note> getAllNotes(){
        List<Note> allNotes = new ArrayList<Note>();
        String query = "SELECT * FROM " + tblName+"";
        SQLiteDatabase db = this.getWritableDatabase();
        Cursor cursor = db.rawQuery(query,null);
        if(cursor.moveToFirst()){
            do{
                Note note = new Note();
                note.setNoidung(cursor.getString(0));
                note.setQuantrong(Boolean.parseBoolean(cursor.getString(1)));
                note.setNgaytao(Date.valueOf(cursor.getString(2)));
                allNotes.add(note);
            }while (cursor.moveToNext());
        }
        return allNotes;
    }

    public long addNote(Note note){
        SQLiteDatabase db = this.getWritableDatabase();
        ContentValues val = new ContentValues();
        val.put(NoiDung,note.getNoidung());
        val.put(QuanTrong,note.isQuantrong());
        val.put(NgayTao, String.valueOf(note.getNgaytao()));

        long item = db.insert(tblName,null,val);
        return  item;
    }

    public int editNote(Note note){
        SQLiteDatabase db = this.getWritableDatabase();
        ContentValues val = new ContentValues();
        Log.d("Edited", "Edited Title: -> "+ note.getNoidung() + "\n Date -> "+note.getNgaytao());
        val.put(NoiDung,note.getNoidung());
        val.put(QuanTrong,note.isQuantrong());
        val.put(NgayTao, String.valueOf(note.getNgaytao()));
        return db.update(tblName,val,NoiDung+"=?",new String[]{String.valueOf(note.getNoidung())});
    }

    void deleteNote(String noidung){
        SQLiteDatabase db = this.getWritableDatabase();
        db.delete(tblName,NoiDung+"=?",new String[]{String.valueOf(noidung)});
        db.close();
    }
}
