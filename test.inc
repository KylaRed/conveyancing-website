<?php

declare(strict_types=1);

namespace test;

class test
{
/*
    public static function html(): string
    {
        global $Z;
        $out = '';
        $out .= \Pouch\Head\HeaderStandard::main();
        $out .= "<body class=\"bgWash\">";
        \Pouch\Data\Request::varsGet('parentTabCode', 'childTabCode');

        if (!$Z->req->parentTabCode || !$Z->req->childTabCode) {
            self::showTabNotFoundError();
        }

        // ----------------------------------------------------------------------------------------------------

        $out .= "<div id=\"pageContents\">";
        $out .= "<div style=\"overflow: scroll; height: 100%;\">";
        foreach (\Pouch\Tools\Tabs::getTabArr() as $tabRow) {
            if ($tabRow['parentTabCode'] === $Z->req->parentTabCode && $tabRow['childTabCode'] === $Z->req->childTabCode) {
                $out .= \Pouch\Func\Loader::callStatic($tabRow['includePhpClass'], 'html');
            }
        }
        $out .= "</div>";

        $out .= "</body>";

        return $out;
    }

    private static function showTabNotFoundError(): void
    {
        global $L;
        $errorMessageHtml = '';
        $elementsArr      = [];
        $elementsArr[]    = self::elementTabButton_html('elements1', $L->ELEMENTS_1);
        $elementsArr[]    = self::elementTabButton_html('elements2', $L->ELEMENTS_2);
        $elementsArr[]    = self::elementTabButton_html('elements3', $L->ELEMENTS_3);
        $errorMessageHtml .= (new \Pouch\Element\Row($elementsArr))->html();
        (new \Pouch\Misc\Msg(
            msgStatusCode:           'fyi',
            msgHeading:              "Choose a tab",
            msgBodyHtml:             $errorMessageHtml,
            isAddingMsgBodyTextTags: false,
        ))->echoAndExit();
    }

    private static function elementTabButton_html(string $parentTabCode, string $elLabel): \Pouch\Element\Select
    {
        global $Z, $SIZ;
        $elementsRsAssocArr = [];
        foreach (\Pouch\Tools\Tabs::getTabArr() as $tabRow) {
            if ($tabRow['parentTabCode'] == $parentTabCode && $tabRow['childTabCode']) {
                $elementsRsAssocArr[] = ['optionValueStr' => "$tabRow[parentTabCode]_$tabRow[childTabCode]", 'optionLabel' => $tabRow['tabLabel']]; // Don't translate.
            }
        }
        $selectMaxWidthRem = $SIZ->popupWidthRem - $SIZ->formPaddingLeftRem - $SIZ->formPaddingLeftRem;
        return new \Pouch\Element\Select(
            elName:           "{$parentTabCode}ChooseTabSelect", // [_Alt_]+[_Shift_]+[_A_]:  https://www.pouchexamples.com/elementExamples/  assertVisible=#$elName
            elLabel:          $elLabel,
            editPermsStr:     '+',
            viewPermsStr:     '-',
            onchangeJs:       "window.location.href = '$Z->HTTPS_APPS_HOST/elementExamples/' + this.value.replace('_', '/') + '/';",
            widthRem:         $selectMaxWidthRem / 3,
            hasChevron:       false,
            selectParamsJson: "dropdownCss: {'width': '18rem'}",
            rsAssocArr:       $elementsRsAssocArr,
        );
    }*/

}