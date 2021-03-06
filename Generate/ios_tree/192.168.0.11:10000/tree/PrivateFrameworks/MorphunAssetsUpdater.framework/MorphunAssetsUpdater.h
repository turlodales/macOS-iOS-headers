/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MorphunAssetsUpdater.framework/MorphunAssetsUpdater
 */

@interface MorphunAssetsUpdater : NSObject

+ (id)createError:(id)arg1 code:(int)arg2;
+ (id)forceSynchronousUpdateOfLocales:(id)arg1 andRemoveLocales:(id)arg2;
+ (id)forceUpdate:(bool)arg1 updateLanguages:(id)arg2 removeLanguages:(id)arg3;
+ (void)forceUpdateLocales:(id)arg1 andRemoveLocales:(id)arg2 withCompletion:(id /* block */)arg3;
+ (void)forceUpdateWithCompletion:(id)arg1 remove:(id)arg2 completion:(id /* block */)arg3;
+ (id)getPaths:(id*)arg1;
+ (void)getPathsWithCompletion:(id /* block */)arg1;
+ (id)languageCodesFromLocales:(id)arg1;
+ (id)validateMessage:(id)arg1;

@end
