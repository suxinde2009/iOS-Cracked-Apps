//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FavBaseDetailViewController.h"

#import "FavModifyItemDelegate.h"

@class FavoritesAudioDetailView, NSString;

@interface FavoritesDetailController : FavBaseDetailViewController <FavModifyItemDelegate>
{
    FavoritesAudioDetailView *_detailView;
}

- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)onFavItemModify:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (long long)otherButtonTitlesArray:(id)arg1;
- (void)initDetailContent;
- (void)dealloc;
- (void)setItemInfoModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
