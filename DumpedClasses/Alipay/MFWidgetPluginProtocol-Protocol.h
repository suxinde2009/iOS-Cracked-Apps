//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol MFWidgetPluginProtocol <NSObject>
+ (NSString *)tagType;
- (void)bindAndLayoutWithData:(id)arg1 cssItem:(NSDictionary *)arg2 extendInfo:(NSDictionary *)arg3;

@optional
+ (_Bool)validateData:(id)arg1;
+ (NSString *)subType;
+ (struct CGSize)sizeOfWidgetWithData:(id)arg1 cssItem:(NSDictionary *)arg2 superFrame:(struct CGRect)arg3 extendInfo:(NSDictionary *)arg4;
- (void)setMFDelegate:(id)arg1;
- (void)handleMFWidgetEvent:(NSDictionary *)arg1;
@end
