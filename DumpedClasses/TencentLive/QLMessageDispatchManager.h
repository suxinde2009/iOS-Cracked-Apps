//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QLRequestModelDelegate.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSString, QLTalkingRoomReqModel;

@interface QLMessageDispatchManager : NSObject <QLRequestModelDelegate>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _hasNextPage;
    id <QLRequestModelDelegate><QLLiveMessageDispatchDelegate> _delegate;
    long long _mode;
    QLTalkingRoomReqModel *_talkingModel;
    QLTalkingRoomReqModel *_dispatchingModel;
    NSMutableArray *_dataArray;
    NSMutableArray *_commentList;
    long long _refreshTime;
    NSString *_commentKey;
    NSString *_filterKey;
    NSString *_getDataID;
    NSString *_dispatchTimmerID;
}

@property(retain, nonatomic) NSString *dispatchTimmerID; // @synthesize dispatchTimmerID=_dispatchTimmerID;
@property(retain, nonatomic) NSString *getDataID; // @synthesize getDataID=_getDataID;
@property(retain, nonatomic) NSString *filterKey; // @synthesize filterKey=_filterKey;
@property(retain, nonatomic) NSString *commentKey; // @synthesize commentKey=_commentKey;
@property(nonatomic) long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(retain, nonatomic) NSMutableArray *commentList; // @synthesize commentList=_commentList;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) QLTalkingRoomReqModel *dispatchingModel; // @synthesize dispatchingModel=_dispatchingModel;
@property(retain, nonatomic) QLTalkingRoomReqModel *talkingModel; // @synthesize talkingModel=_talkingModel;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) _Bool hasNextPage; // @synthesize hasNextPage=_hasNextPage;
@property(nonatomic) __weak id <QLRequestModelDelegate><QLLiveMessageDispatchDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setCommentKey:(id)arg1 filterKey:(id)arg2;
- (void)refreshData:(double)arg1 started:(_Bool)arg2 fire:(_Bool)arg3;
- (void)setMgrRequestData:(id)arg1 filterKey:(id)arg2 pageContex:(id)arg3 pageFlag:(long long)arg4;
- (void)stopDispathTimer;
- (void)starUpDispatchTimer;
- (void)requestModelDidFinishLoad:(id)arg1;
- (void)requestModelDidStartLoad:(id)arg1;
- (void)requestModel:(id)arg1 didFailedLoadWithError:(id)arg2;
- (void)notifyDelegateToReceiveDispacthData:(id)arg1;
- (void)updateData;
- (void)dispatchData;
- (id)dispatchingModelWithItemList:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
