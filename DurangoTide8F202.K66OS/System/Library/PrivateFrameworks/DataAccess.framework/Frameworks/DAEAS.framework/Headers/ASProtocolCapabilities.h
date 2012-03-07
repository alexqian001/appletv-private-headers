/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface ASProtocolCapabilities : NSObject {
	NSString *_calConstraintsPlistPath;	// 4 = 0x4
	NSString *_abConstraintsPlistPath;	// 8 = 0x8
}
- (id)initWithProtocolVersionString:(id)protocolVersionString;	// 0x32edb92d
- (id)_abConstraintsPlistPath;	// 0x32edb829
- (id)_calConstraintsPlistPath;	// 0x32edb8b9
- (id)addressBookConstraintsPath;	// 0x32edb7e9
- (id)calendarConstraintsPath;	// 0x32edb879
- (void)dealloc;	// 0x32edba15
- (BOOL)supportsItemOperationsCommand;	// 0x32edb6f1
- (BOOL)supportsMailboxSearch;	// 0x32edb6e9
- (BOOL)supportsProtocolVersion:(id)version;	// 0x32edb909
- (BOOL)supportsSettingsCommand;	// 0x32edb6ed
@end
