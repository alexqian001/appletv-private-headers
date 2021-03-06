/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMNode.h"

@class NSString;

@interface DOMCharacterData : DOMNode {
}
@property(copy) NSString *data;	// G=0x35357f25; S=0x35462c65; 
@property(readonly, assign) unsigned length;	// G=0x35462e1d; 
- (void)appendData:(id)data;	// 0x35463201
// declared property getter: - (id)data;	// 0x35357f25
- (void)deleteData:(unsigned)data :(unsigned)arg2;	// 0x35463851
- (void)deleteData:(unsigned)data length:(unsigned)length;	// 0x35463739
- (void)insertData:(unsigned)data :(id)arg2;	// 0x35463579
- (void)insertData:(unsigned)data data:(id)data2;	// 0x354633b9
// declared property getter: - (unsigned)length;	// 0x35462e1d
- (void)replaceData:(unsigned)data :(unsigned)arg2 :(id)arg3;	// 0x35463b29
- (void)replaceData:(unsigned)data length:(unsigned)length data:(id)data3;	// 0x35463969
// declared property setter: - (void)setData:(id)data;	// 0x35462c65
- (id)substringData:(unsigned)data :(unsigned)arg2;	// 0x35463029
- (id)substringData:(unsigned)data length:(unsigned)length;	// 0x35462e51
@end

