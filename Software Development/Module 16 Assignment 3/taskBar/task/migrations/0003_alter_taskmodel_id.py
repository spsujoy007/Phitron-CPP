# Generated by Django 5.0.6 on 2024-06-01 15:17

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('task', '0002_rename_asign_date_taskmodel_assign_date'),
    ]

    operations = [
        migrations.AlterField(
            model_name='taskmodel',
            name='id',
            field=models.IntegerField(max_length=50, primary_key=True, serialize=False),
        ),
    ]
