//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "NM3DTouchProtocol.h"
#import "NMBannerViewDelegate.h"
#import "NMDiscoveryHeaderCellDelegate.h"
#import "NMDjOperationDelegate.h"
#import "NMDjRadioCategoryDelegate.h"
#import "NMDjRadioPersonalRmdCellDelegate.h"
#import "NMHttpRequestDelegate.h"
#import "NMRecommendCategoryDjRadioCellDelegate.h"
#import "NMScrollableTableControllerProtocol.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NMBannerView, NMDjOperationView, NMDjProgramRecommendRequest, NMDjRadioBannerRequest, NMGetBatchRequest, NMScrollTableController, NMScrollableTabItem, NSMutableArray, NSMutableDictionary, NSString, UIPreviewAction, UITableView, UIView;

@interface NMDiscoverDjViewController : UIViewController <NMHttpRequestDelegate, UITableViewDelegate, UITableViewDataSource, NMBannerViewDelegate, NMDjOperationDelegate, NMDiscoveryHeaderCellDelegate, NMDjRadioPersonalRmdCellDelegate, NMRecommendCategoryDjRadioCellDelegate, NMDjRadioCategoryDelegate, NM3DTouchProtocol, NMScrollableTableControllerProtocol>
{
    UITableView *_tableView;
    UIView *_tableHeadView;
    NMBannerView *_bannerView;
    NMDjOperationView *_djOperationView;
    NSMutableArray *_bannerArray;
    NSMutableArray *_discoverRecommendDjRadioGroupArray;
    NSMutableDictionary *_recommendRadioCategoryDic;
    NSMutableDictionary *_discoverRecommendGroupDic;
    NSMutableArray *_goodProgramIdArray;
    NSMutableArray *_allGoodProgramArray;
    NSMutableArray *_recommendCategoryArray;
    _Bool _isDjLoading;
    _Bool _needShowPayExclusiveMore;
    NMGetBatchRequest *_recommendDjRadioBantchRequest;
    NMDjRadioBannerRequest *_djRadioBannerRequest;
    NMDjProgramRecommendRequest *_djProgramRecommendRequest;
    NMScrollableTabItem *_scrollableItem;
    NMScrollTableController *_scrollTableController;
    id <NMDiscoverDjDelegate> _delegate;
}

@property(nonatomic) __weak id <NMDiscoverDjDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak NMScrollTableController *scrollTableController; // @synthesize scrollTableController=_scrollTableController;
@property(retain, nonatomic) NMScrollableTabItem *scrollableItem; // @synthesize scrollableItem=_scrollableItem;
- (void).cxx_destruct;
- (void)logDjOperationImpress;
- (void)logCategoryClickWithCategory:(id)arg1;
- (void)logCategoryImpressWithCategory:(id)arg1;
- (void)logRecommendCategoryDjRadioMoreWithAction:(id)arg1 withCategory:(id)arg2;
- (void)logRecommendCategoryDjRadioClickWithIndex:(long long)arg1 withDjRadio:(id)arg2 withCategory:(id)arg3;
- (void)logRecommendCategoryDjRadioImpressWithIndex:(long long)arg1 withGroup:(id)arg2;
- (void)logRecommendDjRadioClickWithIndex:(long long)arg1 withDjRadio:(id)arg2;
- (void)logRecommendDjRadioImpressWithArray:(id)arg1;
- (void)logGoodDjProgrameChange;
- (void)logGoodDjProgramWithActionStr:(id)arg1 WithIndex:(long long)arg2 withDjProgram:(id)arg3;
- (void)logChargeDjRadioClickWithIndex:(long long)arg1 withDjRadioId:(id)arg2;
- (void)logDjRadioRankBtnClick;
- (void)logDjRadioCategoryBtnClick;
- (void)logBannerClickWithIndex:(long long)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (id)itemsFor3DTouch;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)appResignActive:(id)arg1;
- (void)appDidBecomActive:(id)arg1;
- (void)chooseRandomGoodDjProgram;
- (void)handleDjRadioCategoryRequestResult:(id)arg1;
- (void)handleHotCategoryRequestResult:(id)arg1;
- (void)handleHotCategoryDjRadioRequestResult:(id)arg1;
- (void)handleDjRadioPersonalRecommendRequestResult:(id)arg1;
- (void)handleDjProgramRecommendRequestResult:(id)arg1;
- (void)handlePayExclusiveDjRadioRequestResult:(id)arg1;
- (void)handleDjRadioBannerRequestResult:(id)arg1;
- (void)requestFailed:(id)arg1;
- (void)requestCompleted:(id)arg1;
- (void)pushViewController:(id)arg1;
- (void)changeRecommendDjProgram;
- (void)discoveryHeaderCell:(id)arg1 otherButtonClickedWithType:(unsigned long long)arg2;
- (void)discoveryHeaderCell:(id)arg1 moreButtonClickedWithType:(unsigned long long)arg2;
- (void)djRadioCategoryCell:(id)arg1 categoryClicked:(id)arg2;
- (void)recommendCategoryDjRadioCell:(id)arg1 contentClicked:(id)arg2;
- (void)discoveryRecommendDjRadioCell:(id)arg1 contentClicked:(id)arg2;
- (void)djRadioRankClickFromView:(id)arg1;
- (void)djRadioCategoryClickFromView:(id)arg1;
- (void)showBannerInTableHeadView;
- (void)setBannerCanScroll:(_Bool)arg1;
- (void)bannerView:(id)arg1 ClickedAtIndex:(long long)arg2;
- (void)_loginStateChanged;
- (void)cleanData;
- (void)loadDataIfNeeded;
- (void)presented;
- (id)subCategoryRadioArray:(id)arg1 indexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)finishLoadData;
- (void)loadBannerData;
- (void)loadData;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setBannerVisiable;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) UIPreviewAction *nm_addtionPreviewActionItem;
@property(readonly) Class superclass;

@end
