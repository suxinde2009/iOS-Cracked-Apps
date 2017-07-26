//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PluginObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface PluginManager : PluginObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_plugins;
}

@property(retain, nonatomic) NSMutableDictionary *plugins; // @synthesize plugins=_plugins;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
- (void).cxx_destruct;
- (id)plugin:(Class)arg1;
- (void)sendMessage:(SEL)arg1 toPlugins:(id)arg2 withArgs:(void *)arg3;
- (id)sendMessage:(SEL)arg1 toPlugin:(Class)arg2 withArgs:(void *)arg3;
- (void)uninstallAllPlugin;
- (void)uninstallPlugin:(Class)arg1;
- (id)installedPlugins;
- (void)installPlugin:(Class)arg1 withDelegate:(id)arg2 dataSource:(id)arg3;
- (void)installPlugin:(Class)arg1;
- (id)init;

@end
