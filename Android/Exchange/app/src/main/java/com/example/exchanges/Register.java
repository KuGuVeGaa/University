package com.example.exchanges;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.EditText;
import android.widget.TextView;

import com.example.exchanges.databinding.ActivityRegisterBinding;
import com.google.firebase.database.DatabaseReference;
import com.google.firebase.database.FirebaseDatabase;

public class Register extends AppCompatActivity {

    private String fullName_,password_,email_,phoneNumber_,tcNumber_;
    private EditText fullName;
    private EditText password;
    private EditText email;
    private EditText phoneNumber;
    private EditText tcNumber;
    private TextView create;
    private Intent intent;
    private int i=1;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        setContentView(R.layout.activity_register);
    }

    public void loginBack(View v){
        Intent intent = new Intent(Register.this,login.class);
        startActivity(intent);
    }
    public void create(View view){
        Users user = new Users();

        FirebaseDatabase database = FirebaseDatabase.getInstance();
        DatabaseReference myRef = database.getReference("Personals");

        create = (TextView) findViewById(R.id.createAccount);
        fullName = (EditText) findViewById(R.id.fullName);
        password = (EditText) findViewById(R.id.password);
        email = (EditText) findViewById(R.id.email);
        phoneNumber = (EditText) findViewById(R.id.phone);
        tcNumber = (EditText) findViewById(R.id.tc);

        fullName_ = fullName.getText().toString();
        password_ = password.getText().toString();
        email_ = email.getText().toString();
        phoneNumber_ = phoneNumber.getText().toString();
        tcNumber_ = tcNumber.getText().toString();



        if (create.isEnabled()) {
            myRef.child("Personal" + i).child("TC").setValue(user.tc = tcNumber_);
            myRef.child("Personal" + i).child("FullName").setValue(user.fullName = fullName_);
            myRef.child("Personal" + i).child("Password").setValue(user.password = password_);
            myRef.child("Personal" + i).child("Email").setValue(user.email = email_);
            myRef.child("Personal" + i).child("Phone").setValue(user.phone = phoneNumber_);
            i++;
            intent = new Intent(Register.this,login.class);
            startActivity(intent);
        }

    }
}