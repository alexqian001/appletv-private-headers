/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


@interface NSAKDeserializer : NSObject {
	id ds;	// 4 = 0x4
}
- (id)initForDeserializerStream:(id)deserializerStream;	// 0x306f5f0d
- (void)dealloc;	// 0x306f5f49
- (id)deserializeData:(id)data;	// 0x306f6065
- (id)deserializeList:(id)list;	// 0x306f6261
- (id)deserializeListItemIn:(id)anIn at:(unsigned)at length:(unsigned)length;	// 0x306f636d
- (id)deserializeNewData;	// 0x306f6015
- (id)deserializeNewKeyString;	// 0x306f612d
- (id)deserializeNewList;	// 0x306f6211
- (id)deserializeNewObject;	// 0x306f5fa5
- (id)deserializeNewPList;	// 0x306f637d
- (id)deserializeNewString;	// 0x306f60dd
- (id)deserializePList:(id)list;	// 0x306f63cd
- (id)deserializePListKeyIn:(id)anIn;	// 0x306f6661
- (id)deserializePListValueIn:(id)anIn key:(id)key length:(unsigned)length;	// 0x306f6671
- (id)deserializeString:(id)string;	// 0x306f617d
- (id)deserializerStream;	// 0x306f5f95
@end
