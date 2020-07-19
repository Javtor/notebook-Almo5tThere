pair<ll,ll> floyd(ll x0){ 
    ll t = f(x0); ll h = f(f(x0));
    while(t!=h){
        t = f(t); h = f(f(h));
    }
    ll start = 0; t = x0;
    while(t!=h){
        t = f(t); h = f(h); start++;
    }
    ll cyclen = 1; h = f(t);
    while(t != h){
        h = f(h); cyclen++;
    }
    return {start,cyclen}; // start es la longitud antes del ciclo/ posicion donde empieza el ciclo y cyclen es la longitud del ciclo
}
