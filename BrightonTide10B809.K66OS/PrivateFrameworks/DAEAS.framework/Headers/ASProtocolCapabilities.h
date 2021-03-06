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
- (id)initWithProtocolVersionString:(id)protocolVersionString;	// 0x339e63d1
- (id)_abConstraintsPlistPath;	// 0x339e6641
- (id)_calConstraintsPlistPath;	// 0x339e65a1
- (id)addressBookConstraintsPath;	// 0x339e669d
- (id)calendarConstraintsPath;	// 0x339e65fd
- (void)dealloc;	// 0x339e6501
- (BOOL)serverUpdatesAttendeeStatusOnEvents;	// 0x339e659d
- (BOOL)supportsEmailFlagging;	// 0x339e6591
- (BOOL)supportsItemOperationsCommand;	// 0x339e6599
- (BOOL)supportsMailboxSearch;	// 0x339e658d
- (BOOL)supportsNoteSyncing;	// 0x339e66e1
- (BOOL)supportsProtocolVersion:(id)version;	// 0x339e6565
- (BOOL)supportsSettingsCommand;	// 0x339e6595
@end

