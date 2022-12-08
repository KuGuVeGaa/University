package com.example.exchanges;

import android.content.DialogInterface;
import android.content.Intent;
import android.os.Bundle;
import android.text.TextUtils;
import android.view.View;
import android.widget.EditText;

import androidx.appcompat.app.AlertDialog;
import androidx.appcompat.app.AppCompatActivity;

import com.example.exchanges.databinding.ActivityLoginBinding;

public class login extends AppCompatActivity {

    private EditText tc,password;
    private  String userName,passWord,trueUsername="Yavuz",truePassword="1234";
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
        Intent intent = new Intent(login.this,MainActivity.class);
        startActivity(intent);
    }
    public void enter(View v){
        userName = tc.getText().toString();
        passWord = password.getText().toString();
        AlertDialog.Builder builder = new AlertDialog.Builder(login.this);
        AlertDialog alertDialog;
        var binding = ActivityLoginBinding.inflate(getLayoutInflater());
        var viewRoot = binding.getRoot();

        if (!TextUtils.isEmpty(userName)){
            if (!TextUtils.isEmpty(passWord)){
                if (userName.equals(trueUsername)){
                    if (passWord.equals(truePassword)){
                        Intent intent = new Intent(login.this,HomePage.class);
                        intent.putExtra("Username",userName);
                        startActivity(intent);
                    }
                    else {
                        binding.password.setError("Enter the valid password");
                    }
                }
                else {
                    binding.tc.setError("Enter the valid T.C");
                }
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