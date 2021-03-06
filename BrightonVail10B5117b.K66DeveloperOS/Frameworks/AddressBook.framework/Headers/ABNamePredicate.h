/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import "AddressBook-Structs.h"
#import "ABPredicate.h"

@class NSString, NSArray;

@interface ABNamePredicate : ABPredicate {
	void *_addressBook;	// 8 = 0x8
	NSString *_name;	// 12 = 0xc
	BOOL _matchWholeWords;	// 16 = 0x10
	BOOL _matchPersonOrCompanyNamesExclusively;	// 17 = 0x11
	BOOL _matchPreferredName;	// 18 = 0x12
	void *_tokenizations;	// 20 = 0x14
	CFArrayRef _tokenizationSortKeys;	// 24 = 0x18
	NSArray *_groups;	// 28 = 0x1c
	NSArray *_sources;	// 32 = 0x20
}
@property(copy, nonatomic) NSString *accountIdentifier;	// G=0x308ae5b9; S=0x308ae3e9; 
@property(assign, nonatomic) void *addressBook;	// G=0x308aede1; S=0x308ae2b5; @synthesize=_addressBook
@property(assign, nonatomic) void *group;	// G=0x308ae53d; S=0x308ae341; 
@property(retain, nonatomic) NSArray *groups;	// G=0x308aee51; S=0x308aee61; @synthesize=_groups
@property(assign, nonatomic) BOOL matchPersonOrCompanyNamesExclusively;	// G=0x308aee11; S=0x308aee21; @synthesize=_matchPersonOrCompanyNamesExclusively
@property(assign, nonatomic) BOOL matchPreferredName;	// G=0x308aee31; S=0x308aee41; @synthesize=_matchPreferredName
@property(assign, nonatomic) BOOL matchWholeWords;	// G=0x308aedf1; S=0x308aee01; @synthesize=_matchWholeWords
@property(copy, nonatomic) NSString *name;	// G=0x308aedcd; S=0x308ae2e9; @synthesize=_name
@property(assign, nonatomic) void *source;	// G=0x308ae4c1; S=0x308ae395; 
@property(retain, nonatomic) NSArray *sources;	// G=0x308aee71; S=0x308aee81; @synthesize=_sources
@property(readonly, assign) void *tokenizations;	// G=0x308ae635; converted property
- (id)init;	// 0x308ae1ad
- (id)_personNameKeys;	// 0x308ae6c9
- (void)ab_bindStatement:(CPSqliteStatement *)statement withBindingOffset:(int *)bindingOffset predicateIdentifier:(int)identifier;	// 0x308aea85
// declared property getter: - (id)accountIdentifier;	// 0x308ae5b9
// declared property getter: - (void *)addressBook;	// 0x308aede1
- (void)dealloc;	// 0x308ae201
// declared property getter: - (void *)group;	// 0x308ae53d
// declared property getter: - (id)groups;	// 0x308aee51
- (BOOL)isValid;	// 0x308ae69d
// declared property getter: - (BOOL)matchPersonOrCompanyNamesExclusively;	// 0x308aee11
// declared property getter: - (BOOL)matchPreferredName;	// 0x308aee31
// declared property getter: - (BOOL)matchWholeWords;	// 0x308aedf1
// declared property getter: - (id)name;	// 0x308aedcd
- (id)predicateFormat;	// 0x308aecf9
- (id)queryJoinsInCompound:(BOOL)compound;	// 0x308ae6c5
- (id)queryWhereString;	// 0x308ae7d9
// declared property setter: - (void)setAccountIdentifier:(id)identifier;	// 0x308ae3e9
// declared property setter: - (void)setAddressBook:(void *)book;	// 0x308ae2b5
// declared property setter: - (void)setGroup:(void *)group;	// 0x308ae341
// declared property setter: - (void)setGroups:(id)groups;	// 0x308aee61
// declared property setter: - (void)setMatchPersonOrCompanyNamesExclusively:(BOOL)exclusively;	// 0x308aee21
// declared property setter: - (void)setMatchPreferredName:(BOOL)name;	// 0x308aee41
// declared property setter: - (void)setMatchWholeWords:(BOOL)words;	// 0x308aee01
// declared property setter: - (void)setName:(id)name;	// 0x308ae2e9
// declared property setter: - (void)setSource:(void *)source;	// 0x308ae395
// declared property setter: - (void)setSources:(id)sources;	// 0x308aee81
// declared property getter: - (void *)source;	// 0x308ae4c1
// declared property getter: - (id)sources;	// 0x308aee71
// converted property getter: - (void *)tokenizations;	// 0x308ae635
@end

