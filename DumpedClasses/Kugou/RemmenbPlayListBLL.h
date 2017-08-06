//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KGPlayListBase;

@interface RemmenbPlayListBLL : NSObject
{
    KGPlayListBase *_similarRadioBasePlayList;
}

+ (void)RestorePrivateFmUnPlaySongs:(id *)arg1;
+ (void)remmemberPrivateFmUnPlaySongs:(id)arg1;
+ (void)recoverHistoryNormalPlayListSong:(id *)arg1 withSaveKey:(id)arg2;
+ (void)rememberHistoryNormalPlayListSong:(id)arg1 withSaveKey:(id)arg2;
+ (void)restoreKuQunPlayList:(int *)arg1 andGroupName:(id *)arg2 andGroupImgUrl:(id *)arg3 andPlaySourcePath:(id *)arg4 andSongsPlayed:(id *)arg5;
+ (void)rememberKuQunPlayList;
+ (id)restoreSimilarBaseRadioPlayListSong;
+ (void)remmeberSimilarBaseRadioPlayListSong:(id)arg1;
+ (id)restoreRadioPlayListSong;
+ (void)remmeberRadioPlayListSong:(id)arg1;
+ (void)restoreSimilarNomarlPlayListSong:(id *)arg1 currentIndex:(long long *)arg2;
+ (void)remmenbSimilarNomarlPlayListSong:(id)arg1 currentIndex:(long long)arg2;
+ (void)RestorePlayListSong:(id *)arg1 currentIndex:(long long *)arg2;
+ (void)remmenbPlayListSong:(id)arg1 currentIndex:(long long)arg2;
+ (id)sharedInstance;
@property(retain, nonatomic) KGPlayListBase *similarRadioBasePlayList; // @synthesize similarRadioBasePlayList=_similarRadioBasePlayList;
- (void).cxx_destruct;
- (void)resetCurrentProgress;
- (void)recoverPlayListIsFirst:(_Bool)arg1;
- (void)recoverPlayListWhenInitApp;
- (void)recoverPlayList;
- (void)clearHistoryNormalPlayList;
- (void)recoverHistoryNormalPlayList;
- (void)storeHistoryNormalPlayList;
- (void)storePlayListWhenKillApp;
- (void)storePlayList;
- (void)storePlayListIsKill:(_Bool)arg1;

@end
