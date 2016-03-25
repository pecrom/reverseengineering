
2-1-x86:     file format elf32-i386


Disassembly of section .init:

08048428 <_init>:
 8048428:	53                   	push   %ebx
 8048429:	83 ec 08             	sub    $0x8,%esp
 804842c:	e8 bf 00 00 00       	call   80484f0 <__x86.get_pc_thunk.bx>
 8048431:	81 c3 2b 15 00 00    	add    $0x152b,%ebx
 8048437:	8b 83 fc ff ff ff    	mov    -0x4(%ebx),%eax
 804843d:	85 c0                	test   %eax,%eax
 804843f:	74 05                	je     8048446 <_init+0x1e>
 8048441:	e8 3a 00 00 00       	call   8048480 <__gmon_start__@plt>
 8048446:	83 c4 08             	add    $0x8,%esp
 8048449:	5b                   	pop    %ebx
 804844a:	c3                   	ret    

Disassembly of section .plt:

08048450 <_ZNSolsEi@plt-0x10>:
 8048450:	ff 35 60 99 04 08    	pushl  0x8049960
 8048456:	ff 25 64 99 04 08    	jmp    *0x8049964
 804845c:	00 00                	add    %al,(%eax)
	...

08048460 <_ZNSolsEi@plt>:
 8048460:	ff 25 68 99 04 08    	jmp    *0x8049968
 8048466:	68 00 00 00 00       	push   $0x0
 804846b:	e9 e0 ff ff ff       	jmp    8048450 <_init+0x28>

08048470 <__cxa_atexit@plt>:
 8048470:	ff 25 6c 99 04 08    	jmp    *0x804996c
 8048476:	68 08 00 00 00       	push   $0x8
 804847b:	e9 d0 ff ff ff       	jmp    8048450 <_init+0x28>

08048480 <__gmon_start__@plt>:
 8048480:	ff 25 70 99 04 08    	jmp    *0x8049970
 8048486:	68 10 00 00 00       	push   $0x10
 804848b:	e9 c0 ff ff ff       	jmp    8048450 <_init+0x28>

08048490 <_ZNSt8ios_base4InitC1Ev@plt>:
 8048490:	ff 25 74 99 04 08    	jmp    *0x8049974
 8048496:	68 18 00 00 00       	push   $0x18
 804849b:	e9 b0 ff ff ff       	jmp    8048450 <_init+0x28>

080484a0 <__libc_start_main@plt>:
 80484a0:	ff 25 78 99 04 08    	jmp    *0x8049978
 80484a6:	68 20 00 00 00       	push   $0x20
 80484ab:	e9 a0 ff ff ff       	jmp    8048450 <_init+0x28>

080484b0 <_ZNSt8ios_base4InitD1Ev@plt>:
 80484b0:	ff 25 7c 99 04 08    	jmp    *0x804997c
 80484b6:	68 28 00 00 00       	push   $0x28
 80484bb:	e9 90 ff ff ff       	jmp    8048450 <_init+0x28>

Disassembly of section .text:

080484c0 <_start>:
 80484c0:	31 ed                	xor    %ebp,%ebp
 80484c2:	5e                   	pop    %esi
 80484c3:	89 e1                	mov    %esp,%ecx
 80484c5:	83 e4 f0             	and    $0xfffffff0,%esp
 80484c8:	50                   	push   %eax
 80484c9:	54                   	push   %esp
 80484ca:	52                   	push   %edx
 80484cb:	68 00 87 04 08       	push   $0x8048700
 80484d0:	68 90 86 04 08       	push   $0x8048690
 80484d5:	51                   	push   %ecx
 80484d6:	56                   	push   %esi
 80484d7:	68 bb 85 04 08       	push   $0x80485bb
 80484dc:	e8 bf ff ff ff       	call   80484a0 <__libc_start_main@plt>
 80484e1:	f4                   	hlt    
 80484e2:	66 90                	xchg   %ax,%ax
 80484e4:	66 90                	xchg   %ax,%ax
 80484e6:	66 90                	xchg   %ax,%ax
 80484e8:	66 90                	xchg   %ax,%ax
 80484ea:	66 90                	xchg   %ax,%ax
 80484ec:	66 90                	xchg   %ax,%ax
 80484ee:	66 90                	xchg   %ax,%ax

080484f0 <__x86.get_pc_thunk.bx>:
 80484f0:	8b 1c 24             	mov    (%esp),%ebx
 80484f3:	c3                   	ret    
 80484f4:	66 90                	xchg   %ax,%ax
 80484f6:	66 90                	xchg   %ax,%ax
 80484f8:	66 90                	xchg   %ax,%ax
 80484fa:	66 90                	xchg   %ax,%ax
 80484fc:	66 90                	xchg   %ax,%ax
 80484fe:	66 90                	xchg   %ax,%ax

08048500 <deregister_tm_clones>:
 8048500:	b8 8b 99 04 08       	mov    $0x804998b,%eax
 8048505:	2d 88 99 04 08       	sub    $0x8049988,%eax
 804850a:	83 f8 06             	cmp    $0x6,%eax
 804850d:	76 1a                	jbe    8048529 <deregister_tm_clones+0x29>
 804850f:	b8 00 00 00 00       	mov    $0x0,%eax
 8048514:	85 c0                	test   %eax,%eax
 8048516:	74 11                	je     8048529 <deregister_tm_clones+0x29>
 8048518:	55                   	push   %ebp
 8048519:	89 e5                	mov    %esp,%ebp
 804851b:	83 ec 14             	sub    $0x14,%esp
 804851e:	68 88 99 04 08       	push   $0x8049988
 8048523:	ff d0                	call   *%eax
 8048525:	83 c4 10             	add    $0x10,%esp
 8048528:	c9                   	leave  
 8048529:	f3 c3                	repz ret 
 804852b:	90                   	nop
 804852c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

08048530 <register_tm_clones>:
 8048530:	b8 88 99 04 08       	mov    $0x8049988,%eax
 8048535:	2d 88 99 04 08       	sub    $0x8049988,%eax
 804853a:	c1 f8 02             	sar    $0x2,%eax
 804853d:	89 c2                	mov    %eax,%edx
 804853f:	c1 ea 1f             	shr    $0x1f,%edx
 8048542:	01 d0                	add    %edx,%eax
 8048544:	d1 f8                	sar    %eax
 8048546:	74 1b                	je     8048563 <register_tm_clones+0x33>
 8048548:	ba 00 00 00 00       	mov    $0x0,%edx
 804854d:	85 d2                	test   %edx,%edx
 804854f:	74 12                	je     8048563 <register_tm_clones+0x33>
 8048551:	55                   	push   %ebp
 8048552:	89 e5                	mov    %esp,%ebp
 8048554:	83 ec 10             	sub    $0x10,%esp
 8048557:	50                   	push   %eax
 8048558:	68 88 99 04 08       	push   $0x8049988
 804855d:	ff d2                	call   *%edx
 804855f:	83 c4 10             	add    $0x10,%esp
 8048562:	c9                   	leave  
 8048563:	f3 c3                	repz ret 
 8048565:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8048569:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

08048570 <__do_global_dtors_aux>:
 8048570:	80 3d 4c 9a 04 08 00 	cmpb   $0x0,0x8049a4c
 8048577:	75 13                	jne    804858c <__do_global_dtors_aux+0x1c>
 8048579:	55                   	push   %ebp
 804857a:	89 e5                	mov    %esp,%ebp
 804857c:	83 ec 08             	sub    $0x8,%esp
 804857f:	e8 7c ff ff ff       	call   8048500 <deregister_tm_clones>
 8048584:	c6 05 4c 9a 04 08 01 	movb   $0x1,0x8049a4c
 804858b:	c9                   	leave  
 804858c:	f3 c3                	repz ret 
 804858e:	66 90                	xchg   %ax,%ax

08048590 <frame_dummy>:
 8048590:	b8 64 98 04 08       	mov    $0x8049864,%eax
 8048595:	8b 10                	mov    (%eax),%edx
 8048597:	85 d2                	test   %edx,%edx
 8048599:	75 05                	jne    80485a0 <frame_dummy+0x10>
 804859b:	eb 93                	jmp    8048530 <register_tm_clones>
 804859d:	8d 76 00             	lea    0x0(%esi),%esi
 80485a0:	ba 00 00 00 00       	mov    $0x0,%edx
 80485a5:	85 d2                	test   %edx,%edx
 80485a7:	74 f2                	je     804859b <frame_dummy+0xb>
 80485a9:	55                   	push   %ebp
 80485aa:	89 e5                	mov    %esp,%ebp
 80485ac:	83 ec 14             	sub    $0x14,%esp
 80485af:	50                   	push   %eax
 80485b0:	ff d2                	call   *%edx
 80485b2:	83 c4 10             	add    $0x10,%esp
 80485b5:	c9                   	leave  
 80485b6:	e9 75 ff ff ff       	jmp    8048530 <register_tm_clones>

080485bb <main>:
 80485bb:	8d 4c 24 04          	lea    0x4(%esp),%ecx
 80485bf:	83 e4 f0             	and    $0xfffffff0,%esp
 80485c2:	ff 71 fc             	pushl  -0x4(%ecx)
 80485c5:	55                   	push   %ebp
 80485c6:	89 e5                	mov    %esp,%ebp
 80485c8:	51                   	push   %ecx
 80485c9:	83 ec 14             	sub    $0x14,%esp
 80485cc:	c7 45 f4 05 00 00 00 	movl   $0x5,-0xc(%ebp)
 80485d3:	c7 45 f0 06 00 00 00 	movl   $0x6,-0x10(%ebp)
 80485da:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80485dd:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80485e0:	83 ec 08             	sub    $0x8,%esp
 80485e3:	ff 75 f4             	pushl  -0xc(%ebp)
 80485e6:	68 c0 99 04 08       	push   $0x80499c0
 80485eb:	e8 70 fe ff ff       	call   8048460 <_ZNSolsEi@plt>
 80485f0:	83 c4 10             	add    $0x10,%esp
 80485f3:	83 ec 08             	sub    $0x8,%esp
 80485f6:	ff 75 f0             	pushl  -0x10(%ebp)
 80485f9:	68 c0 99 04 08       	push   $0x80499c0
 80485fe:	e8 5d fe ff ff       	call   8048460 <_ZNSolsEi@plt>
 8048603:	83 c4 10             	add    $0x10,%esp
 8048606:	83 ec 08             	sub    $0x8,%esp
 8048609:	ff 75 ec             	pushl  -0x14(%ebp)
 804860c:	68 c0 99 04 08       	push   $0x80499c0
 8048611:	e8 4a fe ff ff       	call   8048460 <_ZNSolsEi@plt>
 8048616:	83 c4 10             	add    $0x10,%esp
 8048619:	b8 00 00 00 00       	mov    $0x0,%eax
 804861e:	8b 4d fc             	mov    -0x4(%ebp),%ecx
 8048621:	c9                   	leave  
 8048622:	8d 61 fc             	lea    -0x4(%ecx),%esp
 8048625:	c3                   	ret    

08048626 <_Z41__static_initialization_and_destruction_0ii>:
 8048626:	55                   	push   %ebp
 8048627:	89 e5                	mov    %esp,%ebp
 8048629:	83 ec 08             	sub    $0x8,%esp
 804862c:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
 8048630:	75 33                	jne    8048665 <_Z41__static_initialization_and_destruction_0ii+0x3f>
 8048632:	81 7d 0c ff ff 00 00 	cmpl   $0xffff,0xc(%ebp)
 8048639:	75 2a                	jne    8048665 <_Z41__static_initialization_and_destruction_0ii+0x3f>
 804863b:	83 ec 0c             	sub    $0xc,%esp
 804863e:	68 4d 9a 04 08       	push   $0x8049a4d
 8048643:	e8 48 fe ff ff       	call   8048490 <_ZNSt8ios_base4InitC1Ev@plt>
 8048648:	83 c4 10             	add    $0x10,%esp
 804864b:	83 ec 04             	sub    $0x4,%esp
 804864e:	68 84 99 04 08       	push   $0x8049984
 8048653:	68 4d 9a 04 08       	push   $0x8049a4d
 8048658:	68 b0 84 04 08       	push   $0x80484b0
 804865d:	e8 0e fe ff ff       	call   8048470 <__cxa_atexit@plt>
 8048662:	83 c4 10             	add    $0x10,%esp
 8048665:	c9                   	leave  
 8048666:	c3                   	ret    

08048667 <_GLOBAL__sub_I_main>:
 8048667:	55                   	push   %ebp
 8048668:	89 e5                	mov    %esp,%ebp
 804866a:	83 ec 08             	sub    $0x8,%esp
 804866d:	83 ec 08             	sub    $0x8,%esp
 8048670:	68 ff ff 00 00       	push   $0xffff
 8048675:	6a 01                	push   $0x1
 8048677:	e8 aa ff ff ff       	call   8048626 <_Z41__static_initialization_and_destruction_0ii>
 804867c:	83 c4 10             	add    $0x10,%esp
 804867f:	c9                   	leave  
 8048680:	c3                   	ret    
 8048681:	66 90                	xchg   %ax,%ax
 8048683:	66 90                	xchg   %ax,%ax
 8048685:	66 90                	xchg   %ax,%ax
 8048687:	66 90                	xchg   %ax,%ax
 8048689:	66 90                	xchg   %ax,%ax
 804868b:	66 90                	xchg   %ax,%ax
 804868d:	66 90                	xchg   %ax,%ax
 804868f:	90                   	nop

08048690 <__libc_csu_init>:
 8048690:	55                   	push   %ebp
 8048691:	57                   	push   %edi
 8048692:	31 ff                	xor    %edi,%edi
 8048694:	56                   	push   %esi
 8048695:	53                   	push   %ebx
 8048696:	e8 55 fe ff ff       	call   80484f0 <__x86.get_pc_thunk.bx>
 804869b:	81 c3 c1 12 00 00    	add    $0x12c1,%ebx
 80486a1:	83 ec 1c             	sub    $0x1c,%esp
 80486a4:	8b 6c 24 30          	mov    0x30(%esp),%ebp
 80486a8:	8d b3 04 ff ff ff    	lea    -0xfc(%ebx),%esi
 80486ae:	e8 75 fd ff ff       	call   8048428 <_init>
 80486b3:	8d 83 fc fe ff ff    	lea    -0x104(%ebx),%eax
 80486b9:	29 c6                	sub    %eax,%esi
 80486bb:	c1 fe 02             	sar    $0x2,%esi
 80486be:	85 f6                	test   %esi,%esi
 80486c0:	74 27                	je     80486e9 <__libc_csu_init+0x59>
 80486c2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 80486c8:	8b 44 24 38          	mov    0x38(%esp),%eax
 80486cc:	89 2c 24             	mov    %ebp,(%esp)
 80486cf:	89 44 24 08          	mov    %eax,0x8(%esp)
 80486d3:	8b 44 24 34          	mov    0x34(%esp),%eax
 80486d7:	89 44 24 04          	mov    %eax,0x4(%esp)
 80486db:	ff 94 bb fc fe ff ff 	call   *-0x104(%ebx,%edi,4)
 80486e2:	83 c7 01             	add    $0x1,%edi
 80486e5:	39 f7                	cmp    %esi,%edi
 80486e7:	75 df                	jne    80486c8 <__libc_csu_init+0x38>
 80486e9:	83 c4 1c             	add    $0x1c,%esp
 80486ec:	5b                   	pop    %ebx
 80486ed:	5e                   	pop    %esi
 80486ee:	5f                   	pop    %edi
 80486ef:	5d                   	pop    %ebp
 80486f0:	c3                   	ret    
 80486f1:	eb 0d                	jmp    8048700 <__libc_csu_fini>
 80486f3:	90                   	nop
 80486f4:	90                   	nop
 80486f5:	90                   	nop
 80486f6:	90                   	nop
 80486f7:	90                   	nop
 80486f8:	90                   	nop
 80486f9:	90                   	nop
 80486fa:	90                   	nop
 80486fb:	90                   	nop
 80486fc:	90                   	nop
 80486fd:	90                   	nop
 80486fe:	90                   	nop
 80486ff:	90                   	nop

08048700 <__libc_csu_fini>:
 8048700:	f3 c3                	repz ret 

Disassembly of section .fini:

08048704 <_fini>:
 8048704:	53                   	push   %ebx
 8048705:	83 ec 08             	sub    $0x8,%esp
 8048708:	e8 e3 fd ff ff       	call   80484f0 <__x86.get_pc_thunk.bx>
 804870d:	81 c3 4f 12 00 00    	add    $0x124f,%ebx
 8048713:	83 c4 08             	add    $0x8,%esp
 8048716:	5b                   	pop    %ebx
 8048717:	c3                   	ret    
