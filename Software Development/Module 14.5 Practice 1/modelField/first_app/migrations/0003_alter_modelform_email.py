# Generated by Django 5.0.6 on 2024-06-01 07:56

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('first_app', '0002_modelform_email_alter_modelform_id'),
    ]

    operations = [
        migrations.AlterField(
            model_name='modelform',
            name='email',
            field=models.EmailField(max_length=254, unique=True),
        ),
    ]