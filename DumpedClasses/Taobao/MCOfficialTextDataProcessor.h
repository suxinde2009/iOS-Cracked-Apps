//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCOfficialBaseProcessor.h"

#import "MCOfficialBubbleDelegate.h"
#import "MCOfficialCellDelegate.h"

@class NSString;

@interface MCOfficialTextDataProcessor : MCOfficialBaseProcessor <MCOfficialBubbleDelegate, MCOfficialCellDelegate>
{
}

- (void)tableViewCell:(id)arg1 reSendMessageVO:(id)arg2;
- (void)bubble:(id)arg1 didSelectedMessageVO:(id)arg2 phoneNumber:(id)arg3;
- (void)bubble:(id)arg1 didSelectedMessageVO:(id)arg2 url:(id)arg3;
- (void)bubble:(id)arg1 longPressWithMessageVO:(id)arg2;
- (id)getCellByOfficialVO:(id)arg1 tableView:(id)arg2 config:(id)arg3;
- (id)doTransformProcessorData:(id)arg1 config:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
