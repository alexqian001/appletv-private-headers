/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISOperation.h"

@class ISURLOperation, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ISURLOperationPoolOperation : ISOperation {
@private
	int _cancelCount;	// 60 = 0x3c
	BOOL _forwardImmediately;	// 64 = 0x40
	NSMutableArray *_operations;	// 68 = 0x44
}
@property(readonly, assign, nonatomic) ISURLOperation *mainOperation;	// G=0x33bd9099; 
- (void)_forwardResponseFromOperation:(id)operation toOperation:(id)operation2;	// 0x33bd9225
- (void)addOperation:(id)operation;	// 0x33bd8eb9
- (void)cancelOperation:(id)operation;	// 0x33bd8fc1
- (BOOL)containsOperation:(id)operation;	// 0x33bd903d
- (void)dealloc;	// 0x33bd8e6d
// declared property getter: - (id)mainOperation;	// 0x33bd9099
- (void)run;	// 0x33bd9101
@end
