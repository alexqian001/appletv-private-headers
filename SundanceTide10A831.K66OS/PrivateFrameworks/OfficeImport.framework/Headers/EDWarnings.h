/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


@interface EDWarnings : NSObject {
	CFArrayRef mWarnings;	// 4 = 0x4
}
- (id)init;	// 0x36a5bc35
- (void)addWarning:(CPTaggedMessageStructure *)warning;	// 0x36b6b6a5
- (void)dealloc;	// 0x36a8a60d
- (void)reportWarningsWithAssociatedObject:(id)associatedObject;	// 0x36bf77e9
@end
