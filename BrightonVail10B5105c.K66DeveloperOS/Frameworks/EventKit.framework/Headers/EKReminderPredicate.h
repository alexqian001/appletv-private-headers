/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import "EKPredicate.h"

@class NSString, NSDate;

@interface EKReminderPredicate : EKPredicate {
	NSString *_title;	// 12 = 0xc
	NSString *_listTitle;	// 16 = 0x10
	BOOL _limitToCompletedOrIncomplete;	// 20 = 0x14
	BOOL _completed;	// 21 = 0x15
	NSDate *_dueAfter;	// 24 = 0x18
	NSDate *_dueBefore;	// 28 = 0x1c
	BOOL _useDueDateAsCompletionDate;	// 32 = 0x20
	NSString *_searchTerm;	// 36 = 0x24
	int _sortOrder;	// 40 = 0x28
	unsigned _maxResults;	// 44 = 0x2c
	BOOL _useCompletionDateAsAlternate;	// 48 = 0x30
}
@property(assign, nonatomic) BOOL completed;	// G=0x35b222c9; S=0x35b21aa1; @synthesize=_completed
@property(retain, nonatomic) NSDate *dueAfter;	// G=0x35b222d9; S=0x35b21ab1; @synthesize=_dueAfter
@property(retain, nonatomic) NSDate *dueBefore;	// G=0x35b222e9; S=0x35b21ac1; @synthesize=_dueBefore
@property(assign, nonatomic) BOOL limitToCompletedOrIncomplete;	// G=0x35b222b9; S=0x35b21a91; @synthesize=_limitToCompletedOrIncomplete
@property(retain, nonatomic) NSString *listTitle;	// G=0x35b222a9; S=0x35b8b43d; @synthesize=_listTitle
@property(assign, nonatomic) unsigned maxResults;	// G=0x35b22339; S=0x35b8b46d; @synthesize=_maxResults
@property(retain, nonatomic) NSString *searchTerm;	// G=0x35b22319; S=0x35b8b45d; @synthesize=_searchTerm
@property(assign, nonatomic) int sortOrder;	// G=0x35b22329; S=0x35b21ad1; @synthesize=_sortOrder
@property(retain, nonatomic) NSString *title;	// G=0x35b22299; S=0x35b8b42d; @synthesize=_title
@property(assign, nonatomic) BOOL useCompletionDateAsAlternate;	// G=0x35b22309; S=0x35b21a81; @synthesize=_useCompletionDateAsAlternate
@property(assign, nonatomic) BOOL useDueDateAsCompletionDate;	// G=0x35b222f9; S=0x35b8b44d; @synthesize=_useDueDateAsCompletionDate
+ (id)predicateWithCalendars:(id)calendars;	// 0x35b21a05
- (id)initWithCalendars:(id)calendars;	// 0x35b21a41
- (id)initWithCoder:(id)coder;	// 0x35b8b221
// declared property getter: - (BOOL)completed;	// 0x35b222c9
- (id)copyWithZone:(NSZone *)zone;	// 0x35b8ad11
- (void)dealloc;	// 0x35b22f19
// declared property getter: - (id)dueAfter;	// 0x35b222d9
// declared property getter: - (id)dueBefore;	// 0x35b222e9
- (void)encodeWithCoder:(id)coder;	// 0x35b22099
- (BOOL)isEqual:(id)equal;	// 0x35b8af09
// declared property getter: - (BOOL)limitToCompletedOrIncomplete;	// 0x35b222b9
// declared property getter: - (id)listTitle;	// 0x35b222a9
// declared property getter: - (unsigned)maxResults;	// 0x35b22339
// declared property getter: - (id)searchTerm;	// 0x35b22319
// declared property setter: - (void)setCompleted:(BOOL)completed;	// 0x35b21aa1
// declared property setter: - (void)setDueAfter:(id)after;	// 0x35b21ab1
// declared property setter: - (void)setDueBefore:(id)before;	// 0x35b21ac1
// declared property setter: - (void)setLimitToCompletedOrIncomplete:(BOOL)completedOrIncomplete;	// 0x35b21a91
// declared property setter: - (void)setListTitle:(id)title;	// 0x35b8b43d
// declared property setter: - (void)setMaxResults:(unsigned)results;	// 0x35b8b46d
// declared property setter: - (void)setSearchTerm:(id)term;	// 0x35b8b45d
// declared property setter: - (void)setSortOrder:(int)order;	// 0x35b21ad1
// declared property setter: - (void)setTitle:(id)title;	// 0x35b8b42d
// declared property setter: - (void)setUseCompletionDateAsAlternate:(BOOL)alternate;	// 0x35b21a81
// declared property setter: - (void)setUseDueDateAsCompletionDate:(BOOL)date;	// 0x35b8b44d
// declared property getter: - (int)sortOrder;	// 0x35b22329
// declared property getter: - (id)title;	// 0x35b22299
// declared property getter: - (BOOL)useCompletionDateAsAlternate;	// 0x35b22309
// declared property getter: - (BOOL)useDueDateAsCompletionDate;	// 0x35b222f9
@end
