//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGViewController.h"

#import "EditTextViewControllerDelegate.h"

@class KGClickCellView, KGThemeButton, NSArray, NSString, UGCAudioInfo, UIScrollView, UIView, UgcBaseSonglistInfo;

@interface KGUSEditSongInfoViewController : KGViewController <EditTextViewControllerDelegate>
{
    UIScrollView *_scrollView;
    KGClickCellView *_songNameView;
    KGClickCellView *_singerNameView;
    KGClickCellView *_tagsView;
    KGClickCellView *_introView;
    KGThemeButton *_uploadBtn;
    _Bool _isChange;
    unsigned long long _uploadType;
    UgcBaseSonglistInfo *_songInfo;
    UGCAudioInfo *_audioInfo;
    NSString *_songName;
    NSString *_singerName;
    NSArray *_tagInfoArray;
    NSString *_intro;
    UIView *_copyRightIntroduceView;
    KGThemeButton *_haveReadArticleBtn;
}

@property(retain, nonatomic) KGThemeButton *haveReadArticleBtn; // @synthesize haveReadArticleBtn=_haveReadArticleBtn;
@property(retain, nonatomic) UIView *copyRightIntroduceView; // @synthesize copyRightIntroduceView=_copyRightIntroduceView;
@property(retain, nonatomic) NSString *intro; // @synthesize intro=_intro;
@property(retain, nonatomic) NSArray *tagInfoArray; // @synthesize tagInfoArray=_tagInfoArray;
@property(copy, nonatomic) NSString *singerName; // @synthesize singerName=_singerName;
@property(copy, nonatomic) NSString *songName; // @synthesize songName=_songName;
@property(retain, nonatomic) UGCAudioInfo *audioInfo; // @synthesize audioInfo=_audioInfo;
@property(retain, nonatomic) UgcBaseSonglistInfo *songInfo; // @synthesize songInfo=_songInfo;
@property(nonatomic) unsigned long long uploadType; // @synthesize uploadType=_uploadType;
- (void).cxx_destruct;
- (void)ugcBackEventAction;
- (void)backButtonClick:(id)arg1;
- (void)okWithText:(id)arg1 AndTag:(long long)arg2;
- (void)copyRightBtnClicked:(id)arg1;
- (void)popSelf;
- (_Bool)checkEditInfo;
- (void)allReadyToUpload;
- (void)uploadAction:(id)arg1;
- (void)readArticle:(id)arg1;
- (void)editIntro;
- (void)editTagsInfo;
- (void)editSingerName;
- (void)editSongName;
- (void)refreshCopyRightPosition;
- (void)refreshIntroduceViewWithStr:(id)arg1;
- (void)setIntroViewRight;
- (void)setTagsViewRight;
- (void)setSingerNameRight;
- (void)setSongNameViewRight;
- (void)refreshPlachorHolder;
- (void)createUI;
- (long long)showPlayBarWay;
- (void)dealloc;
- (void)viewDidLoad;
- (void)KGUsingControllerState:(int)arg1;
- (id)initWithAudioInfo:(id)arg1;
- (id)initWithSongInfo:(id)arg1 tagsArray:(id)arg2 intro:(id)arg3 uploadType:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
