/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

@interface MFObjectTable : NSObject {
	NSMutableArray *m_objects;	// 4 = 0x4
}
- (id)init;	// 0x33a1eca9
- (void)clear;	// 0x33a22879
- (void)dealloc;	// 0x33a22bbd
- (int)deleteObject:(unsigned)object;	// 0x33aa6c5d
- (id)getObject:(unsigned)object;	// 0x33bb6c35
- (unsigned)insertPos;	// 0x33aa63c9
- (int)putObject:(id)object :(unsigned)arg2;	// 0x33a21f41
- (int)selectInto:(int)into :(id)arg2;	// 0x33a221cd
- (int)size;	// 0x33a21ae5
@end
