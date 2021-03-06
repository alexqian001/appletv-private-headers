/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import "NoteCollectionObject.h"
#import "Notes-Structs.h"

@class NoteAccountObject, NSString, NSSet;

@interface NoteStoreObject : NoteCollectionObject {
}
@property(retain, nonatomic) NoteAccountObject *account;	// @dynamic
@property(retain, nonatomic) NSSet *changes;	// @dynamic
@property(retain, nonatomic) NSString *externalIdentifier;	// @dynamic
@property(retain, nonatomic) NSString *name;	// @dynamic
@property(retain, nonatomic) NSString *syncAnchor;	// @dynamic
- (id)basicAccountIdentifier;	// 0x33db5a69
- (id)collectionInfo;	// 0x33db590d
- (unsigned)maximumServerIntId;	// 0x33db55c5
- (id)notesForGUIDs:(id)guids;	// 0x33db50d1
- (id)notesForIntegerIds:(id)integerIds;	// 0x33db4f21
- (id)notesForServerIds:(id)serverIds;	// 0x33db4d71
- (id)notesForServerIntIds:(id)serverIntIds;	// 0x33db5281
- (id)notesForServerIntIdsInRange:(NSRange)range;	// 0x33db5431
- (id)predicateForNotes;	// 0x33db58d5
@end

