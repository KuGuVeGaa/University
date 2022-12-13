package com.example.connection;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

import com.example.connection.databinding.ActivityFirebaseConnectionBinding;
import com.google.firebase.database.DatabaseReference;
import com.google.firebase.database.FirebaseDatabase;

public class FirebaseConnection extends AppCompatActivity {

    private String text;
    private Button btn_;
    private EditText editText;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_firebase_connection);
        AddPersonal();

    }
    public void AddPersonal(){
        btn_ = (Button) findViewById(R.id.btn);
        btn_.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                FirebaseDatabase database = FirebaseDatabase.getInstance();
                DatabaseReference myRef = database.getReference("Personal");
                editText = (EditText) findViewById(R.id.st);
                Personal personal = new Personal();
                text = editText.getText().toString();

                myRef.child("T.C").setValue(personal.tc );
                myRef.child("FullName").setValue(personal.fullName = text);
                myRef.child("Password").setValue(personal.password = text);
                myRef.child("Email").setValue(personal.email = text);
                myRef.child("Phone").setValue(personal.phone = text);
            }
        });

    }
}