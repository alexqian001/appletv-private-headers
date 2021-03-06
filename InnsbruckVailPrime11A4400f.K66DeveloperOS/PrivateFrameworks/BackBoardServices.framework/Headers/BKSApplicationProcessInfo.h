/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import "BackBoardServices-Structs.h"
#import </libobjc.A.h>
#import "NSCopying.h"
#import "BKSXPCCoding.h"

@class BKSMachSendRight, NSNumber, NSString;

@interface BKSApplicationProcessInfo : NSObject <NSCopying, BKSXPCCoding> {
	BOOL _suspended;	// 4 = 0x4
	BOOL _classic;	// 5 = 0x5
	NSString *_bundleIdentifier;	// 8 = 0x8
	NSNumber *_pidNumber;	// 12 = 0xc
	NSNumber *_beingDebugged;	// 16 = 0x10
	BKSMachSendRight *_eventPort;	// 20 = 0x14
}
@property(retain, nonatomic) NSNumber *beingDebugged;	// G=0x301c24cd; S=0x301c24dd; @synthesize=_beingDebugged
@property(copy, nonatomic) NSString *bundleIdentifier;	// G=0x301c2489; S=0x301c249d; @synthesize=_bundleIdentifier
@property(assign, nonatomic) BOOL classic;	// G=0x301c252d; S=0x301c253d; @synthesize=_classic
@property(retain, nonatomic) BKSMachSendRight *eventPort;	// G=0x301c24ed; S=0x301c24fd; @synthesize=_eventPort
@property(retain, nonatomic) NSNumber *pidNumber;	// G=0x301c24ad; S=0x301c24bd; @synthesize=_pidNumber
@property(assign, nonatomic) BOOL suspended;	// G=0x301c250d; S=0x301c251d; @synthesize=_suspended
- (id)initWithInfo:(id)info zone:(NSZone *)zone;	// 0x301c1ffd
- (id)initWithXPCDictionary:(id)xpcdictionary;	// 0x301c22d1
// declared property getter: - (id)beingDebugged;	// 0x301c24cd
// declared property getter: - (id)bundleIdentifier;	// 0x301c2489
// declared property getter: - (BOOL)classic;	// 0x301c252d
- (id)copyWithZone:(NSZone *)zone;	// 0x301c228d
- (void)dealloc;	// 0x301c2119
- (id)description;	// 0x301c2191
- (void)encodeWithXPCDictionary:(id)xpcdictionary;	// 0x301c23bd
// declared property getter: - (id)eventPort;	// 0x301c24ed
// declared property getter: - (id)pidNumber;	// 0x301c24ad
// declared property setter: - (void)setBeingDebugged:(id)debugged;	// 0x301c24dd
// declared property setter: - (void)setBundleIdentifier:(id)identifier;	// 0x301c249d
// declared property setter: - (void)setClassic:(BOOL)classic;	// 0x301c253d
// declared property setter: - (void)setEventPort:(id)port;	// 0x301c24fd
// declared property setter: - (void)setPidNumber:(id)number;	// 0x301c24bd
// declared property setter: - (void)setSuspended:(BOOL)suspended;	// 0x301c251d
// declared property getter: - (BOOL)suspended;	// 0x301c250d
@end

