/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

#import <NSObject.h> // Unknown library
#import "AYOperationCompanion.h"

@class AYOperation;

@interface AYSimpleOperationCompanion : NSObject <AYOperationCompanion> {
	AYOperation *_operation;	// 4 = 0x4
}
@property(readonly, retain) AYOperation *operation;	// G=0x32dadfed; converted property
- (id)initWithOperation:(id)operation;	// 0x32dae1d1
// converted property getter: - (id)operation;	// 0x32dadfed
- (void)postOperationForOperation:(id)operation;	// 0x32dafc5d
@end

