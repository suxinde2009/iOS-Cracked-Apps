//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "QXBigSpeakerBaseViewDelegate-Protocol.h"

@class NSMutableArray, NSString, QXBigSpeakerBaseView;
@protocol QXBigSpeakerContainerViewDelegate;

@interface QXBigSpeakerContainerView : UIView <QXBigSpeakerBaseViewDelegate>
{
    _Bool _landScape;
    id <QXBigSpeakerContainerViewDelegate> _delegate;
    QXBigSpeakerBaseView *_bigSpeakView;
    NSMutableArray *_bigSpeakerDataArr;
}

@property(retain, nonatomic) NSMutableArray *bigSpeakerDataArr; // @synthesize bigSpeakerDataArr=_bigSpeakerDataArr;
@property(retain, nonatomic) QXBigSpeakerBaseView *bigSpeakView; // @synthesize bigSpeakView=_bigSpeakView;
@property(nonatomic) __weak id <QXBigSpeakerContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool landScape; // @synthesize landScape=_landScape;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)showMsgForCannotJumpToOtherChatRoom;
- (void)jumpToOtherChatRoomWithRoomID:(id)arg1;
- (void)removeBigSpeakerIsFullScreen:(_Bool)arg1;
- (void)showBigSpeaker;
- (void)showBigSpeakerWithItem:(id)arg1;
- (void)stopBigSpeaker;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

