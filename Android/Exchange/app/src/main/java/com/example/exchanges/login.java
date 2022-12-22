package com.example.exchanges;

import android.content.DialogInterface;
import android.content.Intent;
import android.os.Bundle;
import android.text.TextUtils;
import android.view.View;
import android.widget.EditText;

import androidx.annotation.NonNull;
import androidx.appcompat.app.AlertDialog;
import androidx.appcompat.app.AppCompatActivity;

import com.example.exchanges.databinding.ActivityLoginBinding;
import com.google.firebase.database.DataSnapshot;
import com.google.firebase.database.DatabaseError;
import com.google.firebase.database.DatabaseReference;
import com.google.firebase.database.FirebaseDatabase;
import com.google.firebase.database.ValueEventListener;

public class login extends AppCompatActivity {

    private EditText tc,password;
    private  String tc_,passWord,trueUsername="Yavuz",truePassword="1234";

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        var binding = ActivityLoginBinding.inflate(getLayoutInflater());
        var viewRoot = binding.getRoot();

        tc = (EditText) findViewById(R.id.tc);
        password = (EditText) findViewById(R.id.password);
        setContentView(viewRoot);
    }
    public void backCreate(View v){
        Intent intent = new Intent(login.this,Register.class);
        startActivity(intent);
    }
    public void enter(View v){
        tc_ = tc.getText().toString();
        passWord = password.getText().toString();
        AlertDialog.Builder builder = new AlertDialog.Builder(login.this);
        FirebaseDatabase database = FirebaseDatabase.getInstance();
        DatabaseReference myRef = database.getReference("Personals");
        AlertDialog alertDialog;
        var binding = ActivityLoginBinding.inflate(getLayoutInflater());
        var viewRoot = binding.getRoot();

        if (!TextUtils.isEmpty(tc_)){
            if (!TextUtils.isEmpty(passWord)){
                myRef.addValueEventListener(new ValueEventListener() {
                    @Override
                    public void onDataChange(@NonNull DataSnapshot snapshot) {
                        for (DataSnapshot i : snapshot.getChildren()) {
                            var tc__ = i.child("Email");
                            var password__ = i.child("Password");
                            if (tc__.getValue().equals(tc_)){
                                if (password__.getValue().equals(passWord)){
                                    if (binding.login.isEnabled()){
                                        Intent intent = new Intent(login.this,HomePage.class);
                                        intent.putExtra("Username",tc_);
                                        startActivity(intent);
                                    }
                                }
                                else {
                                    binding.password.setError("Enter the valid password");
                                }
                            }
                            else {
                                binding.tc.setError("Enter the valid T.C");
                            }
                        }
                    }

                    @Override
                    public void onCancelled(@NonNull DatabaseError error) {

                    }
                });

            }
            else {
                builder.setTitle("Password Must Not Be Empty !");
                builder.setCancelable(false);
                builder.setIcon(R.mipmap.ic_launcher_round);
                builder.setPositiveButton("Try", new DialogInterface.OnClickListener() {
                    @Override
                    public void onClick(DialogInterface dialog, int which) {
                        Intent intent = new Intent(login.this,login.class);
                        startActivity(intent);
                    }
                });
                builder.setNegativeButton("Exit", new DialogInterface.OnClickListener() {
                    @Override
                    public void onClick(DialogInterface dialog, int which) {
                        dialog.dismiss();
                    }
                });
                alertDialog = builder.create();
                alertDialog.show();
            }
        }
        else {
            builder.setTitle("Username Must Not Be Empty !");
            builder.setCancelable(false);
            builder.setIcon(R.mipmap.ic_launcher_round);
            builder.setPositiveButton("Try", new DialogInterface.OnClickListener() {
                @Override
                public void onClick(DialogInterface dialog, int which) {
                    Intent intent = new Intent(login.this,login.class);
                    startActivity(intent);
                }
            });
            builder.setNegativeButton("Exit", new DialogInterface.OnClickListener() {
                @Override
                public void onClick(DialogInterface dialog, int which) {
                    dialog.dismiss();
                }
            });
            alertDialog = builder.create();
            alertDialog.show();
        }
    }
}