//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PLCrashSignalHandler : NSObject
{
    struct __darwin_sigaltstack _sigstk;
}

+ (void)resetHandlers;
+ (id)sharedHandler;
+ (void)initialize;
- (id).cxx_construct;
- (_Bool)registerHandlerForSignal:(int)arg1 callback:(CDUnknownFunctionPointerType)arg2 context:(void *)arg3 error:(id *)arg4;
- (_Bool)registerHandlerWithSignal:(int)arg1 error:(id *)arg2;
- (id)init;

@end

