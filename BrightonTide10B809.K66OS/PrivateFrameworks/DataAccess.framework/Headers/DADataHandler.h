/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DataAccess-Structs.h"
#import <NSObject.h> // Unknown library


@interface DADataHandler : NSObject {
	void *_container;	// 4 = 0x4
}
@property(assign, nonatomic) void *container;	// G=0x3396a595; S=0x3396a201; @synthesize=_container
+ (id)newDataHandlerForDataclass:(int)dataclass container:(void *)container;	// 0x3396a505
- (id)initWithContainer:(void *)container;	// 0x3396a1b1
- (BOOL)closeDBAndSave:(BOOL)save;	// 0x3396a4bd
// declared property getter: - (void *)container;	// 0x3396a595
- (void *)copyLocalObjectFromId:(int)anId;	// 0x3396a30d
- (CFArrayRef)copyOfAllLocalObjectsInContainer;	// 0x3396a39d
- (int)dataclass;	// 0x3396a27d
- (void)dealloc;	// 0x3396a235
- (void)drainContainer;	// 0x3396a3e5
- (id)getDAObjectWithLocalItem:(void *)localItem serverId:(id)anId account:(id)account;	// 0x3396a54d
- (int)getIdFromLocalObject:(void *)localObject;	// 0x3396a2c5
- (void)openDB;	// 0x3396a475
- (BOOL)saveContainer;	// 0x3396a355
// declared property setter: - (void)setContainer:(void *)container;	// 0x3396a201
- (BOOL)wipeServerIds;	// 0x3396a42d
@end
