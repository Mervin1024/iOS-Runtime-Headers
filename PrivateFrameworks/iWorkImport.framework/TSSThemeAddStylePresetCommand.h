/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString, TSSStyle<TSSPreset>, TSSTheme;

@interface TSSThemeAddStylePresetCommand : TSKCommand {
    BOOL mAddPresetToStylesheet;
    NSString *mIdentifier;
    TSSStyle<TSSPreset> *mPreset;
    NSString *mPresetKind;
    TSSTheme *mTheme;
}

- (void)commit;
- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithTheme:(id)arg1 preset:(id)arg2 presetKind:(id)arg3 identifier:(id)arg4;
- (void)p_addPreset;
- (void)p_removePreset;
- (BOOL)process;
- (void)redo;
- (void)saveToArchiver:(id)arg1;
- (void)undo;

@end
