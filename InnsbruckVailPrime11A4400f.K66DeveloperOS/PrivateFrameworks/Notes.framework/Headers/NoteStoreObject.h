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
- (id)basicAccountIdentifier;	// 0x31697aa1
- (id)collectionInfo;	// 0x31697971
- (unsigned)maximumServerIntId;	// 0x31697521
- (id)notesForGUIDs:(id)guids;	// 0x31697045
- (id)notesForIntegerIds:(id)integerIds;	// 0x31696ea5
- (id)notesForServerIds:(id)serverIds;	// 0x31696d05
- (id)notesForServerIntIds:(id)serverIntIds;	// 0x316971e5
- (id)notesForServerIntIdsInRange:(NSRange)range;	// 0x31697385
- (id)predicateForNotes;	// 0x3169791d
@end
