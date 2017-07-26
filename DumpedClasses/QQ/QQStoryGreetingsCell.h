//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "QQMultiImagePickerControllerDelegate.h"
#import "QQVideoCaptureViewControllerDelegate.h"
#import "StoryVideoEditViewDelegate.h"
#import "TBBizNetworkLogicDelegate.h"
#import "TBStoryVideoClipViewControllerDelegate.h"

@class NSArray, NSString, NSTimer, QQMultiImagePickerController, StoryVideoEditViewController, UIButton, UIImageView, UILabel, UIView;

@interface QQStoryGreetingsCell : UITableViewCell <QQMultiImagePickerControllerDelegate, TBStoryVideoClipViewControllerDelegate, QQVideoCaptureViewControllerDelegate, TBBizNetworkLogicDelegate, StoryVideoEditViewDelegate>
{
    UILabel *_titleLabel;
    UIButton *_closeButton;
    UIButton *_uploadButton;
    NSString *_weekDateStr;
    UIImageView *_autoPlayImageView;
    UIView *_coverView;
    UILabel *_coverLabel;
    NSTimer *_timer;
    NSArray *_assetList;
    unsigned long long _currentIndex;
    unsigned long long _assetCount;
    UIView *_separateLine;
    id <QQStoryGreetingsCellDelegate> _delegate;
    NSString *_gpsLocationStr;
    QQMultiImagePickerController *_localPicker;
    StoryVideoEditViewController *_editVC;
}

@property(retain, nonatomic) StoryVideoEditViewController *editVC; // @synthesize editVC=_editVC;
@property(retain, nonatomic) QQMultiImagePickerController *localPicker; // @synthesize localPicker=_localPicker;
@property(copy, nonatomic) NSString *gpsLocationStr; // @synthesize gpsLocationStr=_gpsLocationStr;
@property(nonatomic) __weak id <QQStoryGreetingsCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didRequestFail:(unsigned long long)arg1 requestModel:(id)arg2 error:(id)arg3;
- (void)didReceivedData:(unsigned long long)arg1 requestModel:(id)arg2 classModel:(id)arg3;
- (void)handleRefreshUI;
- (void)handleLocationResult:(id)arg1;
- (id)topOneThirthImageOfOriginImage:(id)arg1 displaySize:(struct CGSize)arg2 isOpaque:(_Bool)arg3;
- (id)createImageWithColor:(id)arg1 size:(struct CGSize)arg2;
- (void)nextImage;
- (void)removeTimer;
- (void)addTimer;
- (id)getGPSModelWithAssetModel:(id)arg1;
- (void)updateCurrentImageView:(id)arg1;
- (void)setModel:(id)arg1;
- (void)storyVideoCaptureViewControllerDidCancel:(id)arg1;
- (void)storyVideoCaptureViewController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)QQMultiImagePickerControllerDidCancel:(id)arg1;
- (void)QQMultiImagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)recordTimeStamp;
- (void)onClickClosedBtn;
- (void)onClickUploadBtn;
- (id)titleStr;
- (void)adjustCoverLabel;
- (void)adjustUI;
- (void)doInitVideoCoverView;
- (void)doInitUI;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
