//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SSPFacebookShareDialogViewController, UIWindow;

@interface SSPFacebookShareDialogController : NSObject
{
    NSString *_appId;
    NSString *_redirectUrl;
    NSString *_url;
    NSString *_caption;
    NSString *_desc;
    NSString *_imgageUrl;
    NSString *_name;
    NSString *_sourceUrl;
    CDUnknownBlockType _resultHandler;
    UIWindow *_window;
    SSPFacebookShareDialogViewController *_shareViewController;
}

@property(retain, nonatomic) SSPFacebookShareDialogViewController *shareViewController; // @synthesize shareViewController=_shareViewController;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(copy, nonatomic) CDUnknownBlockType resultHandler; // @synthesize resultHandler=_resultHandler;
@property(copy, nonatomic) NSString *sourceUrl; // @synthesize sourceUrl=_sourceUrl;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *imgageUrl; // @synthesize imgageUrl=_imgageUrl;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *redirectUrl; // @synthesize redirectUrl=_redirectUrl;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;
- (void)onResult:(CDUnknownBlockType)arg1;
- (void)share;
- (id)initWithAppId:(id)arg1 redirectUrl:(id)arg2 url:(id)arg3 caption:(id)arg4 desc:(id)arg5 imgageUrl:(id)arg6 name:(id)arg7 sourceUrl:(id)arg8;

@end
