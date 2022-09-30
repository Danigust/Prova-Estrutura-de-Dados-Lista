  void removeN(int n) {
        for (int i = 0; i < n && size > 0; i++) {
            popBack();
        }
    }

    void removeSegundo() {
        if (size == 2) {
            popBack();
        } else if (size > 2) {
            Node* segundo = cabeca->prox;
            Node* terceiro = segundo->prox;
            cabeca->prox = terceiro;
            delete(segundo);
            size--;
        }
    }

    void inserirTamanho() {
        pushBack(size);
    }

    void inserirN(int n) {
        for (int i = 1; i <= n; i++) {
            pushBack(i);
        }
    }

    void inserirPenultimo(dado valor) {
        if (size >= 2) {
            Node* penultimo = cabeca;
            while (penultimo->prox != cauda) {
                penultimo = penultimo->prox;
            }
            Node* novo = new Node(valor);
            penultimo->prox = novo;
            novo->prox = cauda;
            size++;
        }
    }

    void removePosicaoN(int n) {
        if (n <= size) {
            if (n == 1) {
                popFront();
            } else if (n == size) {
                popBack();
            } else {
                Node *anterior = NULL;
                Node *excluir = cabeca;
                for (int i = 0; i < n - 1; i++) {
                    anterior = excluir;
                    excluir = excluir->prox;
                }
                Node *posterior = excluir->prox;
                anterior->prox = posterior;
                delete(excluir);
                size--;
            }
        }
    }
