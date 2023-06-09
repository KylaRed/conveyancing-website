<?php

declare(strict_types=1);

spl_autoload_register(
    static function (string $requestedPhpClass) {
        $conveyancingClassesPath  = '/home/kyla/mnt/ebs1/git/conveyancing-website';
        $namespacePhpClass = str_replace('\\', '/', $requestedPhpClass);
        if (strrpos($namespacePhpClass, '/') !== false) {
            $namespacePhpClass = ltrim($namespacePhpClass, '/');
            if (file_exists("$conveyancingClassesPath/$namespacePhpClass.inc")) {
                require "$conveyancingClassesPath/$namespacePhpClass.inc";
            }
        }

    }
);