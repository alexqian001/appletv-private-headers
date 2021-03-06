/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCoding.h"
#import "NSObject.h"
#import "UITableViewDataSource.h"
#import <NSObject.h> // Unknown library
#import "UITableViewDelegate.h"
#import "UIKit-Structs.h"

@class NSArray;

@protocol UITableViewDataSource <NSObject>
@optional
- (int)numberOfSectionsInTableView:(id)tableView;
- (id)sectionIndexTitlesForTableView:(id)tableView;
- (BOOL)tableView:(id)view canEditRowAtIndexPath:(id)indexPath;
- (BOOL)tableView:(id)view canMoveRowAtIndexPath:(id)indexPath;
@required
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
@optional
- (void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;
- (void)tableView:(id)view moveRowAtIndexPath:(id)indexPath toIndexPath:(id)indexPath3;
@required
- (int)tableView:(id)view numberOfRowsInSection:(int)section;
@optional
- (int)tableView:(id)view sectionForSectionIndexTitle:(id)sectionIndexTitle atIndex:(int)index;
- (id)tableView:(id)view titleForFooterInSection:(int)section;
- (id)tableView:(id)view titleForHeaderInSection:(int)section;
@end

@interface UITableViewDataSource : NSObject <UITableViewDataSource, UITableViewDelegate, NSCoding> {
@private
	NSArray *_sections;	// 4 = 0x4
}
@property(copy, nonatomic) NSArray *sections;	// G=0x3038f60d; S=0x3038f61d; @synthesize=_sections
+ (id)staticDataSourceWithSections:(id)sections;	// 0x3038f085
- (id)initWithCoder:(id)coder;	// 0x3038f0e9
- (void)dealloc;	// 0x3038f1a9
- (void)encodeWithCoder:(id)coder;	// 0x3038f16d
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x3038f1f5
// declared property getter: - (id)sections;	// 0x3038f60d
// declared property setter: - (void)setSections:(id)sections;	// 0x3038f61d
- (BOOL)tableView:(id)view canEditRowAtIndexPath:(id)indexPath;	// 0x3038f585
- (BOOL)tableView:(id)view canMoveRowAtIndexPath:(id)indexPath;	// 0x3038f589
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x3038f25d
- (int)tableView:(id)view editingStyleForRowAtIndexPath:(id)indexPath;	// 0x3038f58d
- (float)tableView:(id)view heightForFooterInSection:(int)section;	// 0x3038f46d
- (float)tableView:(id)view heightForHeaderInSection:(int)section;	// 0x3038f405
- (float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;	// 0x3038f4d5
- (int)tableView:(id)view indentationLevelForRowAtIndexPath:(id)indexPath;	// 0x3038f591
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x3038f215
- (id)tableView:(id)view titleForFooterInSection:(int)section;	// 0x3038f35d
- (id)tableView:(id)view titleForHeaderInSection:(int)section;	// 0x3038f325
- (id)tableView:(id)view viewForFooterInSection:(int)section;	// 0x3038f3cd
- (id)tableView:(id)view viewForHeaderInSection:(int)section;	// 0x3038f395
@end

