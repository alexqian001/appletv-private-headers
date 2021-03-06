/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSException.h> // Unknown library
#import "OfficeImport-Structs.h"

@class CPMessageEntry;

__attribute__((objc_exception))
@interface CPMessageException : NSException {
	CPMessageEntry *m_entry;	// 20 = 0x14
}
+ (id)exceptionWithMessage:(CPTaggedMessageStructure *)message;	// 0x34bd6891
+ (id)exceptionWithUntaggedMessage:(id)untaggedMessage;	// 0x34bd6931
+ (void)initialize;	// 0x349d6dd1
+ (id)nsError:(id)error domain:(id)domain;	// 0x34bd6ae9
+ (void)raise:(CPTaggedMessageStructure *)raise;	// 0x34b25469
+ (void)raiseUntaggedMessage:(id)message;	// 0x34bd69ed
- (id)initWithMessage:(CPTaggedMessageStructure *)message;	// 0x34bd6755
- (id)initWithUntaggedMessage:(id)untaggedMessage;	// 0x34bd67ed
- (void)dealloc;	// 0x34b258a9
- (id)description;	// 0x34bd6a99
- (id)getEntry;	// 0x34bd69dd
@end

