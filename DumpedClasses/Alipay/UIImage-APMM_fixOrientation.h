//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImage.h"

@interface UIImage (APMM_fixOrientation)
- (struct CGAffineTransform)getRotateTransform;
- (unsigned int)normalizeBitmapInfo:(unsigned int)arg1;
- (id)createImageWithTransform:(struct CGAffineTransform)arg1;
- (id)APMM_mirror;
- (id)APMM_fixOrientation;
@end
