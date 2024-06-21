# Generated by Django 5.0.6 on 2024-06-18 18:49

from django.db import migrations, models


class Migration(migrations.Migration):

    initial = True

    dependencies = [
    ]

    operations = [
        migrations.CreateModel(
            name='Musician',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('first_name', models.CharField(max_length=50)),
                ('last_name', models.CharField(max_length=50)),
                ('email', models.EmailField(max_length=80)),
                ('phone', models.CharField(max_length=11)),
                ('instruemnt_type', models.CharField(choices=[('guitar', 'Guitar'), ('piano', 'Piano'), ('drums', 'Drums'), ('violin', 'Violin'), ('flute', 'Flute')], max_length=50)),
            ],
        ),
    ]