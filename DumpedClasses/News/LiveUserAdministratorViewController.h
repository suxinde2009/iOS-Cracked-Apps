//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "LiveAdminSettingDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSNumber, NSString, UITableView, UIView;

@interface LiveUserAdministratorViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate, LiveAdminSettingDelegate>
{
    id <LiveUserAdminListViewDelegate> _delegate;
    UIView *_emptyView;
    UIView *_loadFailedView;
    UITableView *_listView;
    NSMutableArray *_dataArray;
    NSNumber *_userID;
    NSNumber *_roomID;
}

@property(retain, nonatomic) NSNumber *roomID; // @synthesize roomID=_roomID;
@property(retain, nonatomic) NSNumber *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) UITableView *listView; // @synthesize listView=_listView;
@property(retain, nonatomic) UIView *loadFailedView; // @synthesize loadFailedView=_loadFailedView;
@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(nonatomic) __weak id <LiveUserAdminListViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)deleteCellWithAdminUnset:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)displayLoadFailedView:(_Bool)arg1;
- (void)displayEmptyView:(_Bool)arg1;
- (void)requestAdminListData;
- (void)singleTap:(id)arg1;
- (void)backButtonTapped:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserID:(id)arg1 roomID:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
