/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class UITableViewCell;

@interface UITableViewRow : NSObject <NSCoding> {
@private
	int _indentationLevel;	// 4 = 0x4
	UITableViewCell *_cell;	// 8 = 0x8
	float _height;	// 12 = 0xc
}
@property(retain, nonatomic) UITableViewCell *cell;	// G=0x32fe54b9; S=0x32fe54c9; @synthesize=_cell
@property(assign, nonatomic) float height;	// G=0x32fe5499; S=0x32fe54a9; @synthesize=_height
@property(assign, nonatomic) int indentationLevel;	// G=0x32fe5479; S=0x32fe5489; @synthesize=_indentationLevel
+ (id)row;	// 0x32fe5199
- (id)initWithCoder:(id)coder;	// 0x32fe51e1
// declared property getter: - (id)cell;	// 0x32fe54b9
- (void)dealloc;	// 0x32fe542d
- (void)encodeWithCoder:(id)coder;	// 0x32fe52f5
// declared property getter: - (float)height;	// 0x32fe5499
// declared property getter: - (int)indentationLevel;	// 0x32fe5479
// declared property setter: - (void)setCell:(id)cell;	// 0x32fe54c9
// declared property setter: - (void)setHeight:(float)height;	// 0x32fe54a9
// declared property setter: - (void)setIndentationLevel:(int)level;	// 0x32fe5489
@end

