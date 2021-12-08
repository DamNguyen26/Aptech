package damkhoinguyen.aprotrain.com;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;

import java.util.Date;

public class NoteModify extends Activity implements View.OnClickListener {

    private EditText descText;
    private EditText timeText;
    private Button btnUpdate, btnDelete;

    private long _id;
    private DBManager dbManager;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setTitle("Edit Note");
        setContentView(R.layout.activity_modify_notes);

        dbManager = new DBManager(this);
        dbManager.open();

        descText = findViewById(R.id.descEditText);
        timeText = findViewById(R.id.timeEditText);

        btnUpdate = findViewById(R.id.btnUpdate);
        btnDelete = findViewById(R.id.btnDelete);

        Intent intent = getIntent();
        String id = intent.getStringExtra("id");
        String desc = intent.getStringExtra("desc");
        String time = intent.getStringExtra("time");

        _id = Long.parseLong(id);
        descText.setText(desc);
        timeText.setText(time);
        btnUpdate.setOnClickListener(this);
        btnDelete.setOnClickListener(this);
    }

    @Override
    public void onClick(View v) {
        switch (v.getId()){
            case R.id.btnUpdate:
                Date date = java.util.Calendar.getInstance().getTime();
                String desc = descText.getText().toString();
                String time = date.toString();
                dbManager.update(_id, desc, time);
                this.returnHome();
                break;

            case R.id.btnDelete:
                dbManager.delete(_id);
                this.returnHome();
                break;
        }
    }
    public void returnHome(){
        Intent intent = new Intent(getApplicationContext(), MainActivity.class).setFlags(Intent.FLAG_ACTIVITY_CLEAR_TOP);
        startActivity(intent);
    }
}