/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSObject.h> // Unknown library
#import "MFDataConsumer.h"

@class NSArray, NSMutableArray;

@interface MFBaseFilterDataConsumer : NSObject <MFDataConsumer> {
	NSMutableArray *_consumers;	// 4 = 0x4
	BOOL _serialAppend;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSArray *consumers;	// G=0x31511131; @synthesize=_consumers
@property(assign, nonatomic, getter=isSerialAppend) BOOL serialAppend;	// G=0x31511141; S=0x31511151; @synthesize=_serialAppend
+ (id)filterWithConsumer:(id)consumer;	// 0x31511499
+ (id)filterWithConsumers:(id)consumers;	// 0x315114cd
- (id)initWithConsumer:(id)consumer;	// 0x315113fd
- (id)initWithConsumers:(id)consumers;	// 0x31511461
- (int)appendData:(id)data;	// 0x31511201
// declared property getter: - (id)consumers;	// 0x31511131
- (void)dealloc;	// 0x315116ad
- (void)done;	// 0x31511735
// declared property getter: - (BOOL)isSerialAppend;	// 0x31511141
// declared property setter: - (void)setSerialAppend:(BOOL)append;	// 0x31511151
@end

