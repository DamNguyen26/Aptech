package damkhoinguyen.aprotrain.com;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;

import androidx.annotation.Nullable;

import java.util.Date;

public class AddNote extends Activity implements View.OnClickListener {

    private Button addNote;
    private EditText descEditText;
    private EditText timeEditText;
    private DBManager dbManager;

    @Override
    protected void onCreate(@Nullable Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setTitle("Add Note");
        setContentView(R.layout.add_note);

        descEditText = findViewById(R.id.descEditText);
        timeEditText = findViewById(R.id.timeEditText);
        addNote = findViewById(R.id.addRecord);

        dbManager = new DBManager(this);
        dbManager.open();
        addNote.setOnClickListener(this);
        Button cancel = findViewById(R.id.btnCancel);
        cancel.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v) {
                finish();
            }
        });
    }

    @Override
    public void onClick(View v) {
        switch (v.getId()){
            case R.id.addRecord: {
                Date date = java.util.Calendar.getInstance().getTime();
                final String desc = descEditText.getText().toString();
                final String time = date.toString();

                dbManager.insert(desc, time);

                Intent main = new Intent(AddNote.this, MainActivity.class).setFlags(Intent.FLAG_ACTIVITY_CLEAR_TOP);
                startActivity(main);
                break;
            }
        }
    }
}