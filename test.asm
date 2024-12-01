.model small
.code

main proc
    mov ax,@data
    mov ds,ax

    

    int 03h
    main 21h
endp proc
end