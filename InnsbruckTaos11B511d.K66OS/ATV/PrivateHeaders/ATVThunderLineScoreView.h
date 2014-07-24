/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRAsyncImageControl, BRImageControl, NSDictionary, BRTextControl, BRTableView;

__attribute__((visibility("hidden")))
@interface ATVThunderLineScoreView : BRControl {
	NSDictionary *_data;	// 84 = 0x54
	BRTextControl *_homeTeamName;	// 88 = 0x58
	BRTextControl *_awayTeamName;	// 92 = 0x5c
	BRTextControl *_homeTeamScore;	// 96 = 0x60
	BRTextControl *_awayTeamScore;	// 100 = 0x64
	BRAsyncImageControl *_homeTeamLogo;	// 104 = 0x68
	BRAsyncImageControl *_awayTeamLogo;	// 108 = 0x6c
	BRTextControl *_gamePeriod;	// 112 = 0x70
	BRTextControl *_gameTime;	// 116 = 0x74
	BRTextControl *_gameState;	// 120 = 0x78
	BRImageControl *_lineScoreBG;	// 124 = 0x7c
	BRTableView *_lineScoreTable;	// 128 = 0x80
}
- (id)initWithDictionary:(id)dictionary;	// 0x271c95
- (id)_gamePeriodAttributes;	// 0x272fb5
- (id)_gameStateAttributes;	// 0x272ffd
- (id)_gameTimeAttributes;	// 0x272fd9
- (id)_scoreAttributes;	// 0x272f91
- (id)_tableCellAttributes;	// 0x273045
- (id)_tableHeaderAttributes;	// 0x273021
- (id)_teamNameAttributes;	// 0x272f6d
- (id)accessibilityLabel;	// 0x272e8d
- (void)dealloc;	// 0x2722b5
- (float)headerHeightForTableView:(id)tableView;	// 0x272e81
- (void)layoutSubcontrols;	// 0x2723f9
- (long)numberOfColumnsInTableView:(id)tableView;	// 0x272a95
- (long)numberOfHeaderColumnsInTableView:(id)tableView;	// 0x272a99
- (long)numberOfRowsInTableView:(id)tableView;	// 0x272a91
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2723e1
- (id)tableView:(id)view headerForColumn:(long)column;	// 0x272c59
- (float)tableView:(id)view heightForRow:(long)row;	// 0x272e75
- (id)tableView:(id)view itemForRow:(long)row inColumn:(long)column;	// 0x272a9d
- (float)tableView:(id)view widthForColumn:(long)column;	// 0x272e1d
- (float)tableView:(id)view widthForHeaderColumn:(long)headerColumn;	// 0x272e65
@end
