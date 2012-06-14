/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
 */

#import <NSObject.h> // Unknown library
#import "CoreMIDI-Structs.h"

@class NSString;

@interface MIDINetworkHost : NSObject {
@private
	MIDINetworkHostImpl *_impl;	// 4 = 0x4
}
@property(readonly, retain, nonatomic) NSString *address;	// G=0x36200b61; 
@property(readonly, retain, nonatomic) NSString *name;	// G=0x36200b4d; 
@property(readonly, retain, nonatomic) NSString *netServiceDomain;	// G=0x36200ba1; 
@property(readonly, retain, nonatomic) NSString *netServiceName;	// G=0x36200b8d; 
@property(readonly, assign, nonatomic) unsigned port;	// G=0x36200b75; 
+ (id)fromAddressAsText:(id)addressAsText withName:(id)name;	// 0x36202529
+ (id)hostWithName:(id)name address:(id)address port:(unsigned)port;	// 0x36202491
+ (id)hostWithName:(id)name netService:(id)service;	// 0x3620267d
+ (id)hostWithName:(id)name netServiceName:(id)name2 netServiceDomain:(id)domain;	// 0x362026e1
- (id)init;	// 0x362027cd
// declared property getter: - (id)address;	// 0x36200b61
- (id)addressAsText;	// 0x3620237d
- (void)dealloc;	// 0x36202781
- (id)description;	// 0x36202155
- (id)displayName;	// 0x362023e1
- (BOOL)hasSameAddressAs:(id)as;	// 0x36202231
- (id)host;	// 0x36200b89
// declared property getter: - (id)name;	// 0x36200b4d
// declared property getter: - (id)netServiceDomain;	// 0x36200ba1
// declared property getter: - (id)netServiceName;	// 0x36200b8d
// declared property getter: - (unsigned)port;	// 0x36200b75
- (void)setName:(id)name;	// 0x362021ed
@end
