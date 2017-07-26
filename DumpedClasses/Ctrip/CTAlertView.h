//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIAlertView.h"

#import "UIAlertViewDelegate.h"

@class NSString;

@interface CTAlertView : UIAlertView <UIAlertViewDelegate>
{
    CDUnknownBlockType _onCancelButtonClicked;
    CDUnknownBlockType _onOtherButtonClicked;
}

+ (void)alertWithTitle:(id)arg1 message:(id)arg2 dismissAfterDelay:(double)arg3;
+ (id)showAlertForNetworkNotAvailableWithDelegate:(id)arg1;
+ (id)showAlertForNetworkNotAvailable;
+ (id)showStandardMessage:(id)arg1 delegate:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitles:(id)arg4;
+ (void)alertWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3;
+ (void)showAlertWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3;
+ (void)showAlertWithMessage:(id)arg1 delegate:(id)arg2 cancelTitle:(id)arg3 confirmTitle:(id)arg4;
+ (void)showErrorInfoWithMessage:(id)arg1;
+ (void)showAlertWithMessage:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType onOtherButtonClicked; // @synthesize onOtherButtonClicked=_onOtherButtonClicked;
@property(copy, nonatomic) CDUnknownBlockType onCancelButtonClicked; // @synthesize onCancelButtonClicked=_onCancelButtonClicked;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)show;
- (void)dismissAlert:(id)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 cancelAction:(CDUnknownBlockType)arg4 otherButtonTitles:(id)arg5 otherAction:(CDUnknownBlockType)arg6;
- (void)dealloc;
- (id)initWithFlightTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 cancelAction:(CDUnknownBlockType)arg4 otherButtonTitles:(id)arg5 otherAction:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
