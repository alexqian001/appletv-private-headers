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
- (id)init;	// 0x339e72cd
- (void)addWarning:(CPTaggedMessageStructure *)warning;	// 0x33af6d65
- (void)dealloc;	// 0x33a15ca5
- (void)reportWarningsWithAssociatedObject:(id)associatedObject;	// 0x33b82e19
@end
