Running code in cmd line (when at `/clox` directory):
```bash
gcc *.c -o main
```
to compile, and
```bash
./main
```
to run.

Quote for naming conventions:

The most important thing here is consistency. That said, I follow the GTK+ coding convention, which can be summarized as follows:
 - All macros and constants in caps: `MAX_BUFFER_SIZE`, `TRACKING_ID_PREFIX`.
 - Struct names and typedef's in camelcase: `GtkWidget`, `TrackingOrder`.
 - Functions that operate on structs: classic C style: `gtk_widget_show()`, `tracking_order_process()`.
 - Pointers: nothing fancy here: `GtkWidget *foo`, `TrackingOrder *bar`.
 - Global variables: just don't use global variables. They are evil.
 - Functions that are there, but shouldn't be called directly, or have obscure uses, or whatever: one or more underscores at the beginning: `_refrobnicate_data_tables()`, `_destroy_cache()`.